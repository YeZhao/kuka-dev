/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package drake;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class lcmt_robotiq_input implements lcm.lcm.LCMEncodable
{
    public byte gACT;
    public byte gGTO;
    public byte gSTA;
    public byte gOBJ;
    public byte gFLT;
    public byte gPR;
    public byte gPO;
    public byte gCU;
 
    public lcmt_robotiq_input()
    {
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0x05c12ee855f63565L;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(drake.lcmt_robotiq_input.class))
            return 0L;
 
        classes.add(drake.lcmt_robotiq_input.class);
        long hash = LCM_FINGERPRINT_BASE
            ;
        classes.remove(classes.size() - 1);
        return (hash<<1) + ((hash>>63)&1);
    }
 
    public void encode(DataOutput outs) throws IOException
    {
        outs.writeLong(LCM_FINGERPRINT);
        _encodeRecursive(outs);
    }
 
    public void _encodeRecursive(DataOutput outs) throws IOException
    {
        outs.writeByte(this.gACT); 
 
        outs.writeByte(this.gGTO); 
 
        outs.writeByte(this.gSTA); 
 
        outs.writeByte(this.gOBJ); 
 
        outs.writeByte(this.gFLT); 
 
        outs.writeByte(this.gPR); 
 
        outs.writeByte(this.gPO); 
 
        outs.writeByte(this.gCU); 
 
    }
 
    public lcmt_robotiq_input(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public lcmt_robotiq_input(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static drake.lcmt_robotiq_input _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        drake.lcmt_robotiq_input o = new drake.lcmt_robotiq_input();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        this.gACT = ins.readByte();
 
        this.gGTO = ins.readByte();
 
        this.gSTA = ins.readByte();
 
        this.gOBJ = ins.readByte();
 
        this.gFLT = ins.readByte();
 
        this.gPR = ins.readByte();
 
        this.gPO = ins.readByte();
 
        this.gCU = ins.readByte();
 
    }
 
    public drake.lcmt_robotiq_input copy()
    {
        drake.lcmt_robotiq_input outobj = new drake.lcmt_robotiq_input();
        outobj.gACT = this.gACT;
 
        outobj.gGTO = this.gGTO;
 
        outobj.gSTA = this.gSTA;
 
        outobj.gOBJ = this.gOBJ;
 
        outobj.gFLT = this.gFLT;
 
        outobj.gPR = this.gPR;
 
        outobj.gPO = this.gPO;
 
        outobj.gCU = this.gCU;
 
        return outobj;
    }
 
}
