// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by lcm-gen

#include <string.h>
#include "drake_lcmt_iiwa_command.h"

static int __drake_lcmt_iiwa_command_hash_computed;
static uint64_t __drake_lcmt_iiwa_command_hash;

uint64_t __drake_lcmt_iiwa_command_hash_recursive(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __drake_lcmt_iiwa_command_get_hash)
            return 0;

    __lcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__drake_lcmt_iiwa_command_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x6ee3e3b9c640a99aLL
         + __int64_t_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __drake_lcmt_iiwa_command_get_hash(void)
{
    if (!__drake_lcmt_iiwa_command_hash_computed) {
        __drake_lcmt_iiwa_command_hash = (int64_t)__drake_lcmt_iiwa_command_hash_recursive(NULL);
        __drake_lcmt_iiwa_command_hash_computed = 1;
    }

    return __drake_lcmt_iiwa_command_hash;
}

int __drake_lcmt_iiwa_command_encode_array(void *buf, int offset, int maxlen, const drake_lcmt_iiwa_command *p, int elements)
{
    int pos = 0, element;
    int thislen;

    for (element = 0; element < elements; element++) {

        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].utime), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].num_joints), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, p[element].joint_position, p[element].num_joints);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].num_torques), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, p[element].joint_torque, p[element].num_torques);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int drake_lcmt_iiwa_command_encode(void *buf, int offset, int maxlen, const drake_lcmt_iiwa_command *p)
{
    int pos = 0, thislen;
    int64_t hash = __drake_lcmt_iiwa_command_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __drake_lcmt_iiwa_command_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int __drake_lcmt_iiwa_command_encoded_array_size(const drake_lcmt_iiwa_command *p, int elements)
{
    int size = 0, element;
    for (element = 0; element < elements; element++) {

        size += __int64_t_encoded_array_size(&(p[element].utime), 1);

        size += __int32_t_encoded_array_size(&(p[element].num_joints), 1);

        size += __double_encoded_array_size(p[element].joint_position, p[element].num_joints);

        size += __int32_t_encoded_array_size(&(p[element].num_torques), 1);

        size += __double_encoded_array_size(p[element].joint_torque, p[element].num_torques);

    }
    return size;
}

int drake_lcmt_iiwa_command_encoded_size(const drake_lcmt_iiwa_command *p)
{
    return 8 + __drake_lcmt_iiwa_command_encoded_array_size(p, 1);
}

int __drake_lcmt_iiwa_command_decode_array(const void *buf, int offset, int maxlen, drake_lcmt_iiwa_command *p, int elements)
{
    int pos = 0, thislen, element;

    for (element = 0; element < elements; element++) {

        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].utime), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].num_joints), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].joint_position = (double*) lcm_malloc(sizeof(double) * p[element].num_joints);
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, p[element].joint_position, p[element].num_joints);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].num_torques), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].joint_torque = (double*) lcm_malloc(sizeof(double) * p[element].num_torques);
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, p[element].joint_torque, p[element].num_torques);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __drake_lcmt_iiwa_command_decode_array_cleanup(drake_lcmt_iiwa_command *p, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {

        __int64_t_decode_array_cleanup(&(p[element].utime), 1);

        __int32_t_decode_array_cleanup(&(p[element].num_joints), 1);

        __double_decode_array_cleanup(p[element].joint_position, p[element].num_joints);
        if (p[element].joint_position) free(p[element].joint_position);

        __int32_t_decode_array_cleanup(&(p[element].num_torques), 1);

        __double_decode_array_cleanup(p[element].joint_torque, p[element].num_torques);
        if (p[element].joint_torque) free(p[element].joint_torque);

    }
    return 0;
}

int drake_lcmt_iiwa_command_decode(const void *buf, int offset, int maxlen, drake_lcmt_iiwa_command *p)
{
    int pos = 0, thislen;
    int64_t hash = __drake_lcmt_iiwa_command_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __drake_lcmt_iiwa_command_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int drake_lcmt_iiwa_command_decode_cleanup(drake_lcmt_iiwa_command *p)
{
    return __drake_lcmt_iiwa_command_decode_array_cleanup(p, 1);
}

int __drake_lcmt_iiwa_command_clone_array(const drake_lcmt_iiwa_command *p, drake_lcmt_iiwa_command *q, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {

        __int64_t_clone_array(&(p[element].utime), &(q[element].utime), 1);

        __int32_t_clone_array(&(p[element].num_joints), &(q[element].num_joints), 1);

        q[element].joint_position = (double*) lcm_malloc(sizeof(double) * q[element].num_joints);
        __double_clone_array(p[element].joint_position, q[element].joint_position, p[element].num_joints);

        __int32_t_clone_array(&(p[element].num_torques), &(q[element].num_torques), 1);

        q[element].joint_torque = (double*) lcm_malloc(sizeof(double) * q[element].num_torques);
        __double_clone_array(p[element].joint_torque, q[element].joint_torque, p[element].num_torques);

    }
    return 0;
}

drake_lcmt_iiwa_command *drake_lcmt_iiwa_command_copy(const drake_lcmt_iiwa_command *p)
{
    drake_lcmt_iiwa_command *q = (drake_lcmt_iiwa_command*) malloc(sizeof(drake_lcmt_iiwa_command));
    __drake_lcmt_iiwa_command_clone_array(p, q, 1);
    return q;
}

void drake_lcmt_iiwa_command_destroy(drake_lcmt_iiwa_command *p)
{
    __drake_lcmt_iiwa_command_decode_array_cleanup(p, 1);
    free(p);
}

int drake_lcmt_iiwa_command_publish(lcm_t *lc, const char *channel, const drake_lcmt_iiwa_command *p)
{
      int max_data_size = drake_lcmt_iiwa_command_encoded_size (p);
      uint8_t *buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = drake_lcmt_iiwa_command_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = lcm_publish (lc, channel, buf, data_size);
      free (buf);
      return status;
}

struct _drake_lcmt_iiwa_command_subscription_t {
    drake_lcmt_iiwa_command_handler_t user_handler;
    void *userdata;
    lcm_subscription_t *lc_h;
};
static
void drake_lcmt_iiwa_command_handler_stub (const lcm_recv_buf_t *rbuf,
                            const char *channel, void *userdata)
{
    int status;
    drake_lcmt_iiwa_command p;
    memset(&p, 0, sizeof(drake_lcmt_iiwa_command));
    status = drake_lcmt_iiwa_command_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding drake_lcmt_iiwa_command!!!\n", status);
        return;
    }

    drake_lcmt_iiwa_command_subscription_t *h = (drake_lcmt_iiwa_command_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    drake_lcmt_iiwa_command_decode_cleanup (&p);
}

drake_lcmt_iiwa_command_subscription_t* drake_lcmt_iiwa_command_subscribe (lcm_t *lcm,
                    const char *channel,
                    drake_lcmt_iiwa_command_handler_t f, void *userdata)
{
    drake_lcmt_iiwa_command_subscription_t *n = (drake_lcmt_iiwa_command_subscription_t*)
                       malloc(sizeof(drake_lcmt_iiwa_command_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->lc_h = lcm_subscribe (lcm, channel,
                                 drake_lcmt_iiwa_command_handler_stub, n);
    if (n->lc_h == NULL) {
        fprintf (stderr,"couldn't reg drake_lcmt_iiwa_command LCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int drake_lcmt_iiwa_command_subscription_set_queue_capacity (drake_lcmt_iiwa_command_subscription_t* subs,
                              int num_messages)
{
    return lcm_subscription_set_queue_capacity (subs->lc_h, num_messages);
}

int drake_lcmt_iiwa_command_unsubscribe(lcm_t *lcm, drake_lcmt_iiwa_command_subscription_t* hid)
{
    int status = lcm_unsubscribe (lcm, hid->lc_h);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe drake_lcmt_iiwa_command_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

