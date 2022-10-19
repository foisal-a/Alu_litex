// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


void Vsim::traceFullThis__10(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+5865,((0x7fffffU & (((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_row) 
                                             << 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__main_bank_write_col3)))),23);
        vcdp->fullBus(c+5873,((0x7fffffU & (((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_row) 
                                             << 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_col)))),23);
        vcdp->fullBit(c+5881,(vlSymsp->TOP__sim.__PVT__builder_t_array_muxed0));
        vcdp->fullBit(c+5889,(vlSymsp->TOP__sim.__PVT__builder_t_array_muxed1));
        vcdp->fullBit(c+5897,(vlSymsp->TOP__sim.__PVT__builder_t_array_muxed2));
        vcdp->fullBit(c+5905,(vlSymsp->TOP__sim.__PVT__builder_t_array_muxed3));
        vcdp->fullBit(c+5913,(vlSymsp->TOP__sim.__PVT__builder_t_array_muxed4));
        vcdp->fullBit(c+5921,(vlSymsp->TOP__sim.__PVT__builder_t_array_muxed5));
        vcdp->fullBus(c+5929,(vlSymsp->TOP__sim.__PVT__builder_array_muxed0),2);
        vcdp->fullBus(c+5937,(vlSymsp->TOP__sim.__PVT__builder_array_muxed1),13);
        vcdp->fullBit(c+5945,(vlSymsp->TOP__sim.__PVT__builder_array_muxed2));
        vcdp->fullBit(c+5953,(vlSymsp->TOP__sim.__PVT__builder_array_muxed3));
        vcdp->fullBit(c+5961,(vlSymsp->TOP__sim.__PVT__builder_array_muxed4));
        vcdp->fullBit(c+5969,(vlSymsp->TOP__sim.__PVT__builder_array_muxed5));
        vcdp->fullBit(c+5977,(vlSymsp->TOP__sim.__PVT__builder_array_muxed6));
        vcdp->fullBit(c+5985,(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset));
        vcdp->fullBit(c+5993,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush));
        vcdp->fullBit(c+6001,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid));
        vcdp->fullBit(c+6009,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready)))));
        vcdp->fullBit(c+6017,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid));
        vcdp->fullBit(c+6025,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid));
        vcdp->fullBit(c+6033,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_isValid));
        vcdp->fullBus(c+6041,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub),32);
        vcdp->fullBit(c+6049,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid));
        vcdp->fullBit(c+6057,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid));
        vcdp->fullBit(c+6065,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt));
        vcdp->fullBit(c+6073,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid));
        vcdp->fullBit(c+6081,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt));
        vcdp->fullBit(c+6089,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt));
        vcdp->fullBus(c+6097,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data),32);
        vcdp->fullBit(c+6105,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException));
        vcdp->fullBit(c+6113,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess));
        vcdp->fullBit(c+6121,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError));
        vcdp->fullBit(c+6129,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready));
        vcdp->fullBit(c+6137,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo));
        vcdp->fullBit(c+6145,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid));
        vcdp->fullBit(c+6153,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr));
        vcdp->fullBus(c+6161,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address),32);
        vcdp->fullBus(c+6169,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size),3);
        vcdp->fullQuad(c+6177,((VL_ULL(0x3ffffffff) 
                                & VL_MULS_QQQ(34,34,34, 
                                              (VL_ULL(0x3ffffffff) 
                                               & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                              (VL_ULL(0x3ffffffff) 
                                               & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
        vcdp->fullQuad(c+6193,((VL_ULL(0x3ffffffff) 
                                & VL_MULS_QQQ(34,34,34, 
                                              (VL_ULL(0x3ffffffff) 
                                               & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                              (VL_ULL(0x3ffffffff) 
                                               & VL_EXTENDS_QI(34,17, 
                                                               (0xffffU 
                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)))))),34);
        vcdp->fullQuad(c+6209,((VL_ULL(0x3ffffffff) 
                                & VL_MULS_QQQ(34,34,34, 
                                              (VL_ULL(0x3ffffffff) 
                                               & VL_EXTENDS_QI(34,17, 
                                                               (0xffffU 
                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1))), 
                                              (VL_ULL(0x3ffffffff) 
                                               & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
        vcdp->fullBus(c+6225,((0xfffffffeU & (((3U 
                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                                : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                              + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2))),32);
        vcdp->fullBit(c+6233,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
                                != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1)) 
                               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                                  & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                      ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                          >> 0x15U) 
                                         ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                            >> 1U))
                                      : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                          ? (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0x15U)
                                          : (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 8U)))))));
        vcdp->fullBus(c+6241,((IData)((VL_ULL(0x1ffffffff) 
                                       & VL_SHIFTRS_QQI(33,33,5, 
                                                        (((QData)((IData)(
                                                                          ((3U 
                                                                            == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                                           & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
                                                                              >> 0x1fU)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
                                                        (0x1fU 
                                                         & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5))))),32);
        vcdp->fullBus(c+6249,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                ? ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                    ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                       & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                    : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                        ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                           | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                        : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                           ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)))
                                : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                    ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less)
                                    : vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub))),32);
        vcdp->fullBit(c+6257,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
        vcdp->fullBit(c+6265,((1U & ((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                      >> 0x14U) & (~ 
                                                   (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                    >> 3U))))));
        vcdp->fullBit(c+6273,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x1fU))));
        vcdp->fullBit(c+6281,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x1eU))));
        vcdp->fullBit(c+6289,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x1dU))));
        vcdp->fullBit(c+6297,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x1cU))));
        vcdp->fullBus(c+6305,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x1aU))),2);
        vcdp->fullBit(c+6313,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x19U))));
        vcdp->fullBus(c+6321,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x15U))),2);
        vcdp->fullBus(c+6329,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x12U))),2);
        vcdp->fullBit(c+6337,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x11U))));
        vcdp->fullBit(c+6345,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x10U))));
        vcdp->fullBit(c+6353,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0xdU))));
        vcdp->fullBit(c+6361,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0xcU))));
        vcdp->fullBit(c+6369,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0xbU))));
        vcdp->fullBus(c+6377,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 8U))),2);
        vcdp->fullBus(c+6385,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 6U))),2);
        vcdp->fullBus(c+6393,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 1U))),2);
        vcdp->fullBit(c+6401,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1));
        vcdp->fullBit(c+6409,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0xfU))));
        vcdp->fullBit(c+6417,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 5U))));
        vcdp->fullBus(c+6425,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2),32);
        vcdp->fullBus(c+6433,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1),32);
        vcdp->fullBit(c+6441,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 3U))));
        vcdp->fullBit(c+6449,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x14U))));
        vcdp->fullBit(c+6457,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less));
        vcdp->fullBus(c+6465,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5),32);
        vcdp->fullBus(c+6473,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1),32);
        vcdp->fullBus(c+6481,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED),32);
        vcdp->fullBit(c+6489,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID));
        vcdp->fullBit(c+6497,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 4U))));
        vcdp->fullBit(c+6505,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)));
        vcdp->fullBit(c+6513,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_4));
        vcdp->fullBit(c+6521,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3));
        vcdp->fullBit(c+6529,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2));
        vcdp->fullBit(c+6537,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1));
        vcdp->fullBus(c+6545,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x17U))),2);
        vcdp->fullBit(c+6553,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther));
        vcdp->fullBit(c+6561,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt));
        vcdp->fullBit(c+6569,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext));
        vcdp->fullBit(c+6577,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid));
        vcdp->fullBit(c+6585,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers));
        vcdp->fullBit(c+6593,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed));
        vcdp->fullBit(c+6601,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt))))));
        vcdp->fullBit(c+6609,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                                & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers))) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt)))));
        vcdp->fullBit(c+6617,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself));
        vcdp->fullBit(c+6625,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther));
        vcdp->fullBit(c+6633,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt));
        vcdp->fullBit(c+6641,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext));
        vcdp->fullBit(c+6649,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck));
        vcdp->fullBit(c+6657,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther) 
                               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck) 
                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
        vcdp->fullBit(c+6665,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed));
        vcdp->fullBit(c+6673,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt))))));
        vcdp->fullBit(c+6681,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck))) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
        vcdp->fullBit(c+6689,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_haltItself));
        vcdp->fullBit(c+6697,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt));
        vcdp->fullBit(c+6705,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext));
        vcdp->fullBit(c+6713,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck));
        vcdp->fullBit(c+6721,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself));
        vcdp->fullBit(c+6729,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isFlushed));
        vcdp->fullBit(c+6737,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt))))));
        vcdp->fullBit(c+6745,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck))) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
        vcdp->fullBit(c+6753,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt));
        vcdp->fullBit(c+6761,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt));
        vcdp->fullBit(c+6769,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext));
        vcdp->fullBit(c+6777,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt))))));
        vcdp->fullBit(c+6785,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring));
        vcdp->fullBit(c+6793,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt));
        vcdp->fullBit(c+6801,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction));
        vcdp->fullBit(c+6809,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid));
        vcdp->fullBus(c+6817,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload),32);
        vcdp->fullBit(c+6825,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid));
        vcdp->fullBit(c+6833,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
        vcdp->fullBus(c+6841,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code),4);
        vcdp->fullBit(c+6849,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) 
                               | (0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                          << 3U) | 
                                         (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext))))))));
        vcdp->fullBit(c+6857,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2) 
                               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)))));
        vcdp->fullBit(c+6865,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
        vcdp->fullBit(c+6873,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid));
        vcdp->fullBit(c+6881,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid));
    }
}

void Vsim::traceFullThis__12(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+6889,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code),4);
        vcdp->fullBit(c+6897,(vlSymsp->TOP__sim__VexRiscv.__PVT__decodeExceptionPort_valid));
        vcdp->fullBit(c+6905,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid));
        vcdp->fullBus(c+6913,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataInit),32);
        vcdp->fullBus(c+6921,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal),32);
        vcdp->fullBit(c+6929,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid));
        vcdp->fullBus(c+6937,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload),32);
        vcdp->fullBit(c+6945,((0U != vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_1)));
        vcdp->fullBit(c+6953,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid));
        vcdp->fullBus(c+6961,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_payload_code),4);
        vcdp->fullBit(c+6969,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                       << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext)))))));
        vcdp->fullBit(c+6977,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid));
        vcdp->fullBus(c+6985,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC
                                : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                    ? vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload
                                    : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                        ? vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
                                        : vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload)))),32);
        vcdp->fullBit(c+6993,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready));
        vcdp->fullBus(c+7001,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc),32);
        vcdp->fullBit(c+7009,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction));
        vcdp->fullBit(c+7017,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))));
        vcdp->fullBit(c+7025,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg))));
        vcdp->fullBit(c+7033,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate));
        vcdp->fullBit(c+7041,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate))));
        vcdp->fullBit(c+7049,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid)) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))));
        vcdp->fullBit(c+7057,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch));
        vcdp->fullBit(c+7065,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed));
        vcdp->fullBit(c+7073,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted) 
                               & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction)) 
                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate)))));
        vcdp->fullBit(c+7081,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)))));
        vcdp->fullBit(c+7089,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready));
        vcdp->fullBit(c+7097,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt));
        vcdp->fullBit(c+7105,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)))));
        vcdp->fullBit(c+7113,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt));
        vcdp->fullBit(c+7121,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_flush));
        vcdp->fullBit(c+7129,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError));
        vcdp->fullBit(c+7137,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
        vcdp->fullBit(c+7145,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))));
        vcdp->fullBit(c+7153,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
        vcdp->fullBit(c+7161,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__main_ibus_ack))));
        vcdp->fullBit(c+7169,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch));
        vcdp->fullBit(c+7177,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l239));
        vcdp->fullBit(c+7185,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l244));
        vcdp->fullBit(c+7193,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250));
        vcdp->fullBit(c+7201,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256));
        vcdp->fullBit(c+7209,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))));
        vcdp->fullBit(c+7217,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready));
        vcdp->fullBit(c+7225,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr)
                                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr))));
        vcdp->fullBus(c+7233,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address
                                : vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address)),32);
        vcdp->fullBus(c+7241,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size)
                                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size))),3);
        vcdp->fullBit(c+7249,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready)))));
        vcdp->fullBit(c+7257,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                                & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready))) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt))));
        vcdp->fullBit(c+7265,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_DBusCachedPlugin_l446));
        vcdp->fullBit(c+7273,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt))));
        vcdp->fullBus(c+7281,((0xffU & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data)),8);
        vcdp->fullBus(c+7289,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                        >> 8U))),8);
        vcdp->fullBus(c+7297,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                        >> 0x10U))),8);
        vcdp->fullBus(c+7305,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                        >> 0x18U))),8);
        vcdp->fullBus(c+7313,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted),32);
        vcdp->fullBus(c+7321,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                             >> 0xcU)))
                                ? vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1
                                : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                 >> 0xcU)))
                                    ? vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3
                                    : vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted))),32);
        vcdp->fullBus(c+7329,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                        >> 0xfU))),5);
        vcdp->fullBus(c+7337,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                        >> 0x14U))),5);
        vcdp->fullBus(c+7345,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                   & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                    ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                       | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                    : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                       ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)))),32);
        vcdp->fullBus(c+7353,((0x1fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)),5);
        vcdp->fullBus(c+7361,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed),32);
        vcdp->fullBit(c+7369,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard));
        vcdp->fullBit(c+7377,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard));
        vcdp->fullBit(c+7385,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring))));
        vcdp->fullBus(c+7393,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2),32);
        vcdp->fullBit(c+7401,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45));
        vcdp->fullBit(c+7409,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1));
        vcdp->fullBit(c+7417,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1));
        vcdp->fullBit(c+7425,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1));
        vcdp->fullBit(c+7433,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_1));
        vcdp->fullBit(c+7441,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2));
        vcdp->fullBit(c+7449,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2));
        vcdp->fullBit(c+7457,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2));
        vcdp->fullBit(c+7465,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_2));
        vcdp->fullBit(c+7473,((1U & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                        >> 5U)))));
        vcdp->fullBit(c+7481,((1U & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                        >> 0xfU)))));
        vcdp->fullBit(c+7489,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard) 
                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard)))));
        vcdp->fullBit(c+7497,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_eq));
        vcdp->fullBit(c+7505,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                               & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                   ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                       >> 0x15U) ^ 
                                      (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                       >> 1U)) : ((2U 
                                                   == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                                   ? 
                                                  (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0x15U)
                                                   : 
                                                  (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 8U))))));
        vcdp->fullBus(c+7513,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2),32);
        vcdp->fullBus(c+7521,((((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                 ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                 : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                               + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2)),32);
        vcdp->fullBit(c+7529,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode));
        vcdp->fullBit(c+7537,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute));
        vcdp->fullBit(c+7545,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory));
        vcdp->fullBit(c+7553,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
        vcdp->fullBit(c+7561,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                                       << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))));
        vcdp->fullBit(c+7569,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965));
        vcdp->fullBit(c+7577,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_1));
        vcdp->fullBit(c+7585,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_2));
        vcdp->fullBit(c+7593,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active));
        vcdp->fullBit(c+7601,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l998));
        vcdp->fullBit(c+7609,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done));
        vcdp->fullBus(c+7617,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege),2);
        vcdp->fullBus(c+7625,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_trapCause),4);
        vcdp->fullBus(c+7633,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_mode),2);
        vcdp->fullBus(c+7641,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_base),30);
        vcdp->fullBit(c+7649,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032));
        vcdp->fullBit(c+7657,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1077));
        vcdp->fullBit(c+7665,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess));
        vcdp->fullBit(c+7673,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1157));
        vcdp->fullBit(c+7681,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeInstruction));
        vcdp->fullBit(c+7689,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction));
        vcdp->fullBit(c+7697,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable));
        vcdp->fullBit(c+7705,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
        vcdp->fullBus(c+7713,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh),17);
        vcdp->fullBus(c+7721,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh),17);
        vcdp->fullBit(c+7729,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement));
        vcdp->fullBit(c+7737,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear));
        vcdp->fullBus(c+7745,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_valueNext),6);
        vcdp->fullBit(c+7753,(((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value)) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))));
        vcdp->fullBit(c+7761,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128));
        vcdp->fullQuad(c+7769,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted),33);
        vcdp->fullQuad(c+7785,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator),33);
        vcdp->fullBus(c+7801,(((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                              >> 0x20U)))
                                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted)
                                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator))),32);
        vcdp->fullBus(c+7809,(((0xfffffffeU & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1) 
                                               << 1U)) 
                               | (1U & (~ (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                   >> 0x20U)))))),32);
        vcdp->fullBit(c+7817,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack))))));
        vcdp->fullBit(c+7825,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
        vcdp->fullBit(c+7833,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt)))));
        vcdp->fullBus(c+7841,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                     >> 0xbU))),2);
        vcdp->fullBit(c+7849,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239));
        vcdp->fullQuad(c+7857,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                              >> 0x1aU)))
                                 ? VL_ULL(0x4e4f4e4520)
                                 : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                  >> 0x1aU)))
                                     ? VL_ULL(0x5852455420)
                                     : ((2U == (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 0x1aU)))
                                         ? VL_ULL(0x4543414c4c)
                                         : VL_ULL(0x3f3f3f3f3f))))),40);
        vcdp->fullArray(c+7873,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string),72);
        vcdp->fullQuad(c+7897,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                              >> 0x12U)))
                                 ? VL_ULL(0x584f525f31)
                                 : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                  >> 0x12U)))
                                     ? VL_ULL(0x4f525f3120)
                                     : ((2U == (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 0x12U)))
                                         ? VL_ULL(0x414e445f31)
                                         : VL_ULL(0x3f3f3f3f3f))))),40);
    }
}

void Vsim::traceFullThis__14(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+7913,(((0x200U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                ? ((0x100U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                    ? 0x504320U : 0x494d53U)
                                : ((0x100U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                    ? 0x494d49U : 0x525320U))),24);
        vcdp->fullQuad(c+7921,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                              >> 6U)))
                                 ? VL_ULL(0x4144445f53554220)
                                 : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                  >> 6U)))
                                     ? VL_ULL(0x534c545f534c5455)
                                     : ((2U == (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 6U)))
                                         ? VL_ULL(0x4249545749534520)
                                         : VL_ULL(0x3f3f3f3f3f3f3f3f))))),64);
        vcdp->fullArray(c+7937,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string),96);
        vcdp->fullArray(c+7961,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_SHIFT_CTRL_string),72);
        vcdp->fullArray(c+7985,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SHIFT_CTRL_string),72);
        vcdp->fullArray(c+8009,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1_CTRL_string),96);
        vcdp->fullBus(c+8033,(((0x1000000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                ? ((0x800000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                    ? 0x4a414c52U : 0x4a414c20U)
                                : ((0x800000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                    ? 0x42202020U : 0x494e4320U))),32);
        vcdp->fullArray(c+8041,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string),96);
        vcdp->fullArray(c+8065,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
        vcdp->fullArray(c+8089,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
        vcdp->fullBit(c+8113,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire));
        vcdp->fullBit(c+8121,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351));
        vcdp->fullBit(c+8129,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement));
        vcdp->fullBit(c+8137,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
                                     | (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                           >> 7U))))));
        vcdp->fullBit(c+8145,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid));
        vcdp->fullBus(c+8153,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload),7);
        vcdp->fullBit(c+8161,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid));
        vcdp->fullBit(c+8169,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way));
        vcdp->fullBus(c+8177,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address),7);
        vcdp->fullBit(c+8185,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid));
        vcdp->fullBit(c+8193,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error));
        vcdp->fullBus(c+8201,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address),20);
        vcdp->fullBit(c+8209,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid));
        vcdp->fullBus(c+8217,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload),10);
        vcdp->fullBit(c+8225,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid));
        vcdp->fullBit(c+8233,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way));
        vcdp->fullBus(c+8241,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address),10);
        vcdp->fullBus(c+8249,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data),32);
        vcdp->fullBus(c+8257,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask),4);
        vcdp->fullBit(c+8265,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way))));
        vcdp->fullBit(c+8273,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way))));
        vcdp->fullBit(c+8281,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l664));
        vcdp->fullBit(c+8289,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))));
        vcdp->fullBus(c+8297,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask),4);
        vcdp->fullBit(c+8305,(((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                 & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                                & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                   == (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                                                 >> 2U)))) 
                               & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask) 
                                         & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask))))));
        vcdp->fullBit(c+8313,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen) 
                               | ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                                   & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                      == (0x3ffU & 
                                          (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                           >> 2U)))) 
                                  & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask) 
                                            & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask)))))));
        vcdp->fullBit(c+8321,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRspFreeze));
        vcdp->fullBit(c+8329,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l824));
        vcdp->fullBit(c+8337,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
        vcdp->fullBit(c+8345,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
        vcdp->fullBit(c+8353,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid));
        vcdp->fullBit(c+8361,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache));
        vcdp->fullBit(c+8369,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits))));
        vcdp->fullBit(c+8377,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault));
        vcdp->fullBit(c+8385,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1004));
        vcdp->fullBit(c+8393,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions) 
                                  & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits)))));
        vcdp->fullBit(c+8401,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1066));
        vcdp->fullBit(c+8409,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling))));
        vcdp->fullBit(c+8417,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement));
        vcdp->fullBus(c+8425,((7U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value) 
                                     + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement)))),3);
        vcdp->fullBit(c+8433,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow));
        vcdp->fullBit(c+8441,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1090));
        vcdp->fullBit(c+8449,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid))));
        vcdp->fullBit(c+8457,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_syncfifo_re));
        vcdp->fullBit(c+8465,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_do_read));
        vcdp->fullBus(c+8473,(((0x3ffffff8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                               >> 2U)) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))),30);
        vcdp->fullBus(c+8481,(((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                ? 7U : 2U)),3);
        vcdp->fullBus(c+8489,((0x3fffffffU & (((5U 
                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                                ? (
                                                   (0xffffffe0U 
                                                    & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                                                   | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready) 
                                                      << 2U))
                                                : (0xfffffffcU 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                                              >> 2U))),30);
        vcdp->fullBus(c+8497,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data),32);
        vcdp->fullBus(c+8505,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
                                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
                                : 0xfU)),4);
        vcdp->fullBit(c+8513,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid));
        vcdp->fullBit(c+8521,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr));
        vcdp->fullBus(c+8529,(vlSymsp->TOP__sim.__PVT__rom_dat0),32);
        vcdp->fullBus(c+8537,(vlSymsp->TOP__sim.__PVT__storage_dat1),10);
        vcdp->fullBus(c+8545,(vlSymsp->TOP__sim.__PVT__storage_dat0),10);
        vcdp->fullBus(c+8553,(vlSymsp->TOP__sim.__PVT__storage_1_dat1),10);
        vcdp->fullBus(c+8561,(vlSymsp->TOP__sim.__PVT__storage_1_dat0),10);
        vcdp->fullBus(c+8569,(vlSymsp->TOP__sim.__PVT__storage_2_dat0),25);
        vcdp->fullBus(c+8577,(vlSymsp->TOP__sim.__PVT__storage_3_dat0),25);
        vcdp->fullBus(c+8585,(vlSymsp->TOP__sim.__PVT__storage_4_dat0),25);
        vcdp->fullBus(c+8593,(vlSymsp->TOP__sim.__PVT__storage_5_dat0),25);
        vcdp->fullBus(c+8601,(vlSymsp->TOP__sim.__PVT__sram_adr0),11);
        vcdp->fullBus(c+8609,(vlSymsp->TOP__sim.__PVT__mem_adr0),6);
        vcdp->fullBus(c+8617,(vlSymsp->TOP__sim.__PVT__storage[0]),10);
        vcdp->fullBus(c+8618,(vlSymsp->TOP__sim.__PVT__storage[1]),10);
        vcdp->fullBus(c+8619,(vlSymsp->TOP__sim.__PVT__storage[2]),10);
        vcdp->fullBus(c+8620,(vlSymsp->TOP__sim.__PVT__storage[3]),10);
        vcdp->fullBus(c+8621,(vlSymsp->TOP__sim.__PVT__storage[4]),10);
        vcdp->fullBus(c+8622,(vlSymsp->TOP__sim.__PVT__storage[5]),10);
        vcdp->fullBus(c+8623,(vlSymsp->TOP__sim.__PVT__storage[6]),10);
        vcdp->fullBus(c+8624,(vlSymsp->TOP__sim.__PVT__storage[7]),10);
        vcdp->fullBus(c+8625,(vlSymsp->TOP__sim.__PVT__storage[8]),10);
        vcdp->fullBus(c+8626,(vlSymsp->TOP__sim.__PVT__storage[9]),10);
        vcdp->fullBus(c+8627,(vlSymsp->TOP__sim.__PVT__storage[10]),10);
        vcdp->fullBus(c+8628,(vlSymsp->TOP__sim.__PVT__storage[11]),10);
        vcdp->fullBus(c+8629,(vlSymsp->TOP__sim.__PVT__storage[12]),10);
        vcdp->fullBus(c+8630,(vlSymsp->TOP__sim.__PVT__storage[13]),10);
        vcdp->fullBus(c+8631,(vlSymsp->TOP__sim.__PVT__storage[14]),10);
        vcdp->fullBus(c+8632,(vlSymsp->TOP__sim.__PVT__storage[15]),10);
        vcdp->fullBus(c+8745,(vlSymsp->TOP__sim.__PVT__storage_1[0]),10);
        vcdp->fullBus(c+8746,(vlSymsp->TOP__sim.__PVT__storage_1[1]),10);
        vcdp->fullBus(c+8747,(vlSymsp->TOP__sim.__PVT__storage_1[2]),10);
        vcdp->fullBus(c+8748,(vlSymsp->TOP__sim.__PVT__storage_1[3]),10);
        vcdp->fullBus(c+8749,(vlSymsp->TOP__sim.__PVT__storage_1[4]),10);
        vcdp->fullBus(c+8750,(vlSymsp->TOP__sim.__PVT__storage_1[5]),10);
        vcdp->fullBus(c+8751,(vlSymsp->TOP__sim.__PVT__storage_1[6]),10);
        vcdp->fullBus(c+8752,(vlSymsp->TOP__sim.__PVT__storage_1[7]),10);
        vcdp->fullBus(c+8753,(vlSymsp->TOP__sim.__PVT__storage_1[8]),10);
        vcdp->fullBus(c+8754,(vlSymsp->TOP__sim.__PVT__storage_1[9]),10);
        vcdp->fullBus(c+8755,(vlSymsp->TOP__sim.__PVT__storage_1[10]),10);
        vcdp->fullBus(c+8756,(vlSymsp->TOP__sim.__PVT__storage_1[11]),10);
        vcdp->fullBus(c+8757,(vlSymsp->TOP__sim.__PVT__storage_1[12]),10);
        vcdp->fullBus(c+8758,(vlSymsp->TOP__sim.__PVT__storage_1[13]),10);
        vcdp->fullBus(c+8759,(vlSymsp->TOP__sim.__PVT__storage_1[14]),10);
        vcdp->fullBus(c+8760,(vlSymsp->TOP__sim.__PVT__storage_1[15]),10);
        vcdp->fullBus(c+8873,(vlSymsp->TOP__sim.__PVT__mem_1_adr0),22);
        vcdp->fullBus(c+8881,(vlSymsp->TOP__sim.__PVT__mem_2_adr0),22);
        vcdp->fullBus(c+8889,(vlSymsp->TOP__sim.__PVT__mem_3_adr0),22);
        vcdp->fullBus(c+8897,(vlSymsp->TOP__sim.__PVT__mem_4_adr0),22);
        vcdp->fullBus(c+8905,(vlSymsp->TOP__sim.__PVT__storage_2[0]),25);
        vcdp->fullBus(c+8906,(vlSymsp->TOP__sim.__PVT__storage_2[1]),25);
        vcdp->fullBus(c+8907,(vlSymsp->TOP__sim.__PVT__storage_2[2]),25);
        vcdp->fullBus(c+8908,(vlSymsp->TOP__sim.__PVT__storage_2[3]),25);
        vcdp->fullBus(c+8909,(vlSymsp->TOP__sim.__PVT__storage_2[4]),25);
        vcdp->fullBus(c+8910,(vlSymsp->TOP__sim.__PVT__storage_2[5]),25);
        vcdp->fullBus(c+8911,(vlSymsp->TOP__sim.__PVT__storage_2[6]),25);
        vcdp->fullBus(c+8912,(vlSymsp->TOP__sim.__PVT__storage_2[7]),25);
        vcdp->fullBus(c+8969,(vlSymsp->TOP__sim.__PVT__storage_3[0]),25);
        vcdp->fullBus(c+8970,(vlSymsp->TOP__sim.__PVT__storage_3[1]),25);
        vcdp->fullBus(c+8971,(vlSymsp->TOP__sim.__PVT__storage_3[2]),25);
        vcdp->fullBus(c+8972,(vlSymsp->TOP__sim.__PVT__storage_3[3]),25);
        vcdp->fullBus(c+8973,(vlSymsp->TOP__sim.__PVT__storage_3[4]),25);
        vcdp->fullBus(c+8974,(vlSymsp->TOP__sim.__PVT__storage_3[5]),25);
        vcdp->fullBus(c+8975,(vlSymsp->TOP__sim.__PVT__storage_3[6]),25);
        vcdp->fullBus(c+8976,(vlSymsp->TOP__sim.__PVT__storage_3[7]),25);
        vcdp->fullBus(c+9033,(vlSymsp->TOP__sim.__PVT__storage_4[0]),25);
        vcdp->fullBus(c+9034,(vlSymsp->TOP__sim.__PVT__storage_4[1]),25);
        vcdp->fullBus(c+9035,(vlSymsp->TOP__sim.__PVT__storage_4[2]),25);
        vcdp->fullBus(c+9036,(vlSymsp->TOP__sim.__PVT__storage_4[3]),25);
        vcdp->fullBus(c+9037,(vlSymsp->TOP__sim.__PVT__storage_4[4]),25);
        vcdp->fullBus(c+9038,(vlSymsp->TOP__sim.__PVT__storage_4[5]),25);
        vcdp->fullBus(c+9039,(vlSymsp->TOP__sim.__PVT__storage_4[6]),25);
        vcdp->fullBus(c+9040,(vlSymsp->TOP__sim.__PVT__storage_4[7]),25);
        vcdp->fullBus(c+9097,(vlSymsp->TOP__sim.__PVT__storage_5[0]),25);
        vcdp->fullBus(c+9098,(vlSymsp->TOP__sim.__PVT__storage_5[1]),25);
        vcdp->fullBus(c+9099,(vlSymsp->TOP__sim.__PVT__storage_5[2]),25);
        vcdp->fullBus(c+9100,(vlSymsp->TOP__sim.__PVT__storage_5[3]),25);
        vcdp->fullBus(c+9101,(vlSymsp->TOP__sim.__PVT__storage_5[4]),25);
        vcdp->fullBus(c+9102,(vlSymsp->TOP__sim.__PVT__storage_5[5]),25);
        vcdp->fullBus(c+9103,(vlSymsp->TOP__sim.__PVT__storage_5[6]),25);
        vcdp->fullBus(c+9104,(vlSymsp->TOP__sim.__PVT__storage_5[7]),25);
        vcdp->fullBus(c+9161,(vlSymsp->TOP__sim.__PVT__tag_mem_adr0),9);
        vcdp->fullBus(c+9169,(vlSymsp->TOP__sim.__PVT__data_mem_grain0_adr0),9);
        vcdp->fullBus(c+9177,(vlSymsp->TOP__sim.__PVT__data_mem_grain1_adr0),9);
        vcdp->fullBus(c+9185,(vlSymsp->TOP__sim.__PVT__data_mem_grain2_adr0),9);
        vcdp->fullBus(c+9193,(vlSymsp->TOP__sim.__PVT__data_mem_grain3_adr0),9);
        vcdp->fullBus(c+9201,(vlSymsp->TOP__sim.__PVT__data_mem_grain4_adr0),9);
        vcdp->fullBus(c+9209,(vlSymsp->TOP__sim.__PVT__data_mem_grain5_adr0),9);
        vcdp->fullBus(c+9217,(vlSymsp->TOP__sim.__PVT__data_mem_grain6_adr0),9);
        vcdp->fullBus(c+9225,(vlSymsp->TOP__sim.__PVT__data_mem_grain7_adr0),9);
        vcdp->fullBus(c+9233,(vlSymsp->TOP__sim.__PVT__data_mem_grain8_adr0),9);
        vcdp->fullBus(c+9241,(vlSymsp->TOP__sim.__PVT__data_mem_grain9_adr0),9);
        vcdp->fullBus(c+9249,(vlSymsp->TOP__sim.__PVT__data_mem_grain10_adr0),9);
        vcdp->fullBus(c+9257,(vlSymsp->TOP__sim.__PVT__data_mem_grain11_adr0),9);
        vcdp->fullBus(c+9265,(vlSymsp->TOP__sim.__PVT__data_mem_grain12_adr0),9);
        vcdp->fullBus(c+9273,(vlSymsp->TOP__sim.__PVT__data_mem_grain13_adr0),9);
        vcdp->fullBus(c+9281,(vlSymsp->TOP__sim.__PVT__data_mem_grain14_adr0),9);
        vcdp->fullBus(c+9289,(vlSymsp->TOP__sim.__PVT__data_mem_grain15_adr0),9);
        vcdp->fullBit(c+9297,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)))));
        vcdp->fullBit(c+9305,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE))));
        vcdp->fullBus(c+9313,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA),32);
        vcdp->fullBit(c+9321,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                     >> 0x1fU))));
        vcdp->fullBus(c+9329,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF),32);
        vcdp->fullBus(c+9337,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA),32);
        vcdp->fullBit(c+9345,((0U != (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0xfU)))));
        vcdp->fullBus(c+9353,((0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                        >> 5U))),7);
        vcdp->fullBit(c+9361,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))));
        vcdp->fullBus(c+9369,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1),32);
        vcdp->fullBit(c+9377,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error) 
                                     | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                        & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                           | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))))));
        vcdp->fullBit(c+9385,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
        vcdp->fullBit(c+9393,((((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                  | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))));
        vcdp->fullBus(c+9401,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen),32);
        vcdp->fullBit(c+9409,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid)))));
        vcdp->fullBus(c+9417,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress),32);
        vcdp->fullBus(c+9425,((0xffffffe0U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)),32);
        vcdp->fullBit(c+9433,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid));
        vcdp->fullBit(c+9441,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_wr));
        vcdp->fullBit(c+9449,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr));
        vcdp->fullBit(c+9457,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess));
        vcdp->fullBus(c+9465,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask),4);
        vcdp->fullQuad(c+9473,((VL_ULL(0xfffffffffffff) 
                                & (((((QData)((IData)(
                                                      (0x7ffffU 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL)) 
                                                                                >> 0x20U)))))))) 
                                      << 0x21U) | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL))) 
                                    + (((QData)((IData)(
                                                        (3U 
                                                         & VL_NEGATE_I((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (VL_ULL(1) 
                                                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
                                                                                >> 0x21U))))))))) 
                                        << 0x32U) | 
                                       (VL_ULL(0x3ffffffffffff) 
                                        & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
                                           << 0x10U)))) 
                                   + (((QData)((IData)(
                                                       (3U 
                                                        & VL_NEGATE_I((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (VL_ULL(1) 
                                                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
                                                                                >> 0x21U))))))))) 
                                       << 0x32U) | 
                                      (VL_ULL(0x3ffffffffffff) 
                                       & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
                                          << 0x10U)))))),52);
        vcdp->fullQuad(c+9489,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HH),34);
        vcdp->fullBus(c+9505,(((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1) 
                               * (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
        vcdp->fullBus(c+9513,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE_DATA_RF),32);
        vcdp->fullBus(c+9521,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0xcU)))
                                ? ((0xff000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                   << 0x18U)) 
                                   | ((0xff0000U & 
                                       (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                        << 0x10U)) 
                                      | ((0xff00U & 
                                          (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                           << 8U)) 
                                         | (0xffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))))
                                : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0xcU)))
                                    ? ((0xffff0000U 
                                        & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                           << 0x10U)) 
                                       | (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))
                                    : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
    }
}

void Vsim::traceFullThis__18(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+9529,((0x20U != (0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                  >> 7U)))));
        vcdp->fullBit(c+9537,((1U & (~ (((1U == (3U 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                    >> 0xdU))) 
                                         & (0U == (0x1fU 
                                                   & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                      >> 0xfU)))) 
                                        | ((3U == (3U 
                                                   & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                      >> 0xdU))) 
                                           & (0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                  >> 0xfU)))))))));
        vcdp->fullBit(c+9545,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_MUL));
        vcdp->fullBit(c+9553,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_MUL));
        vcdp->fullBit(c+9561,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_WR));
        vcdp->fullBit(c+9569,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE));
        vcdp->fullBus(c+9577,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_FORMAL_PC_NEXT),32);
        vcdp->fullBus(c+9585,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT),32);
        vcdp->fullBus(c+9593,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT),32);
        vcdp->fullBus(c+9601,(((IData)(4U) + vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
        vcdp->fullBus(c+9609,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_PC),32);
        vcdp->fullBit(c+9617,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED));
        vcdp->fullBit(c+9625,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_DIV));
        vcdp->fullBit(c+9633,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
        vcdp->fullBit(c+9641,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_DIV));
        vcdp->fullBit(c+9649,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL));
        vcdp->fullQuad(c+9657,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH),34);
        vcdp->fullQuad(c+9673,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW),52);
        vcdp->fullQuad(c+9689,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL),34);
        vcdp->fullQuad(c+9705,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH),34);
        vcdp->fullBus(c+9721,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL),32);
        vcdp->fullBit(c+9729,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE));
        vcdp->fullBit(c+9737,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE));
        vcdp->fullBit(c+9745,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR));
        vcdp->fullBus(c+9753,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL),2);
        vcdp->fullBus(c+9761,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL),2);
        vcdp->fullBus(c+9769,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL),2);
        vcdp->fullBus(c+9777,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC),32);
        vcdp->fullBit(c+9785,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
        vcdp->fullBus(c+9793,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC),32);
        vcdp->fullBit(c+9801,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2));
        vcdp->fullBus(c+9809,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL),2);
        vcdp->fullBit(c+9817,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
        vcdp->fullBit(c+9825,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE));
        vcdp->fullBit(c+9833,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
        vcdp->fullBus(c+9841,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION),32);
        vcdp->fullBit(c+9849,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE));
        vcdp->fullBit(c+9857,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
        vcdp->fullBus(c+9865,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT),32);
        vcdp->fullBus(c+9873,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL),2);
        vcdp->fullBus(c+9881,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL),2);
        vcdp->fullBit(c+9889,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED));
        vcdp->fullBit(c+9897,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO));
        vcdp->fullBit(c+9905,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS));
        vcdp->fullBus(c+9913,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL),2);
        vcdp->fullBus(c+9921,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL),2);
        vcdp->fullBus(c+9929,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL),2);
        vcdp->fullBus(c+9937,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL),2);
        vcdp->fullBit(c+9945,(((0x17U == (0x5fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                               | ((0x6fU == (0x7fU 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                  | ((3U == (0x106fU 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                     | ((0x1073U == 
                                         (0x107fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                        | ((0x2073U 
                                            == (0x207fU 
                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                           | ((0x4063U 
                                               == (0x407fU 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                              | ((0x2013U 
                                                  == 
                                                  (0x207fU 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                 | ((0x23U 
                                                     == 
                                                     (0x603fU 
                                                      & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                    | ((3U 
                                                        == 
                                                        (0x207fU 
                                                         & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                       | ((3U 
                                                           == 
                                                           (0x505fU 
                                                            & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                          | ((0x63U 
                                                              == 
                                                              (0x707bU 
                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                             | ((0xfU 
                                                                 == 
                                                                 (0x607fU 
                                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                | ((0x33U 
                                                                    == 
                                                                    (0xfc00007fU 
                                                                     & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                   | ((0x500fU 
                                                                       == 
                                                                       (0x1f0707fU 
                                                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                      | ((0x5013U 
                                                                          == 
                                                                          (0xbc00707fU 
                                                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                         | ((0x1013U 
                                                                             == 
                                                                             (0xfc00307fU 
                                                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                            | ((0x5033U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                               | ((0x33U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10200073U 
                                                                                == 
                                                                                (0xdfffffffU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10500073U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                                                | (0x73U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))))))))))))))))))));
        vcdp->fullBit(c+9953,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR));
        vcdp->fullBit(c+9961,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
        vcdp->fullBit(c+9969,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
        vcdp->fullBit(c+9977,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY));
        vcdp->fullBus(c+9985,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1),32);
        vcdp->fullBit(c+9993,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT));
        vcdp->fullBus(c+10001,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2),32);
        vcdp->fullBit(c+10009,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_WR));
        vcdp->fullBit(c+10017,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
        vcdp->fullBus(c+10025,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION),32);
        vcdp->fullBus(c+10033,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload),32);
        vcdp->fullBus(c+10041,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC),32);
        vcdp->fullBus(c+10049,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION),32);
        vcdp->fullBit(c+10057,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid));
        vcdp->fullBit(c+10065,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid));
        vcdp->fullBit(c+10073,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid));
        vcdp->fullBit(c+10081,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1));
        vcdp->fullBit(c+10089,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2));
        vcdp->fullBit(c+10097,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3));
        vcdp->fullBit(c+10105,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4));
        vcdp->fullBus(c+10113,((0xfffffffcU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
        vcdp->fullBit(c+10121,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_uncached));
        vcdp->fullBus(c+10129,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address),32);
        vcdp->fullBus(c+10137,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask),4);
        vcdp->fullBus(c+10145,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size),3);
        vcdp->fullBit(c+10153,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_last));
        vcdp->fullBit(c+10161,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid));
        vcdp->fullBus(c+10169,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext),32);
        vcdp->fullBit(c+10177,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                         | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))))));
        vcdp->fullBit(c+10185,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode));
        vcdp->fullBit(c+10193,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute));
        vcdp->fullBit(c+10201,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory));
        vcdp->fullBit(c+10209,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack));
        vcdp->fullBit(c+10217,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg));
        vcdp->fullBit(c+10225,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
        vcdp->fullBit(c+10233,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc));
        vcdp->fullBit(c+10241,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2));
        vcdp->fullBit(c+10249,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
        vcdp->fullBit(c+10257,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))));
        vcdp->fullBit(c+10265,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))));
        vcdp->fullBit(c+10273,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0));
        vcdp->fullBit(c+10281,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid));
        vcdp->fullBus(c+10289,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext),32);
        vcdp->fullBus(c+10297,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rspCounter),32);
        vcdp->fullBit(c+10305,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit));
        vcdp->fullBit(c+10313,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit));
        vcdp->fullBit(c+10321,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                 ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached)
                                 : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess))));
        vcdp->fullBus(c+10329,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                 ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data
                                 : vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF)),32);
        vcdp->fullBus(c+10337,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                 ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask)
                                 : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask))),4);
        vcdp->fullBit(c+10345,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)) 
                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last)))));
        vcdp->fullBit(c+10353,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid));
        vcdp->fullBit(c+10361,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr));
        vcdp->fullBit(c+10369,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached));
        vcdp->fullBus(c+10377,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address),32);
        vcdp->fullBus(c+10385,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data),32);
        vcdp->fullBus(c+10393,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask),4);
        vcdp->fullBus(c+10401,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size),3);
        vcdp->fullBit(c+10409,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last));
        vcdp->fullBit(c+10417,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid)))));
        vcdp->fullBus(c+10425,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_rspCounter),32);
        vcdp->fullBus(c+10433,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 0xcU))),2);
        vcdp->fullBit(c+10441,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid))));
        vcdp->fullBus(c+10449,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                      >> 0xcU))),2);
        vcdp->fullBit(c+10457,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE))));
        vcdp->fullBit(c+10465,((0U == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                >> 7U)))));
        vcdp->fullBus(c+10473,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port0),32);
        vcdp->fullBus(c+10481,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port1),32);
        vcdp->fullBus(c+10489,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                         >> 7U))),5);
        vcdp->fullBit(c+10497,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid));
        vcdp->fullBus(c+10505,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address),5);
        vcdp->fullBus(c+10513,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data),32);
        vcdp->fullBit(c+10521,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                                == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                             >> 0xfU)))));
        vcdp->fullBit(c+10529,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                                == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                             >> 0x14U)))));
        vcdp->fullBit(c+10537,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                          >> 7U)) == 
                                (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                          >> 0xfU)))));
        vcdp->fullBit(c+10545,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                          >> 7U)) == 
                                (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                          >> 0x14U)))));
        vcdp->fullBit(c+10553,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID))));
        vcdp->fullBit(c+10561,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))));
        vcdp->fullBit(c+10569,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))));
        vcdp->fullBus(c+10577,((7U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 0xcU))),3);
        vcdp->fullBus(c+10585,(((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                 ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                 : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC)),32);
        vcdp->fullBus(c+10593,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_mode),2);
        vcdp->fullBus(c+10601,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_base),30);
        vcdp->fullBus(c+10609,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc),32);
        vcdp->fullBit(c+10617,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE));
        vcdp->fullBit(c+10625,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE));
    }
}

void Vsim::traceFullThis__20(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp8[3];
    WData/*95:0*/ __Vtemp9[3];
    WData/*95:0*/ __Vtemp10[3];
    WData/*95:0*/ __Vtemp11[3];
    WData/*95:0*/ __Vtemp12[3];
    // Body
    {
        vcdp->fullBus(c+10633,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP),2);
        vcdp->fullBit(c+10641,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MEIP));
        vcdp->fullBit(c+10649,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MTIP));
        vcdp->fullBit(c+10657,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP));
        vcdp->fullBit(c+10665,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
        vcdp->fullBit(c+10673,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
        vcdp->fullBit(c+10681,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
        vcdp->fullBit(c+10689,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_interrupt));
        vcdp->fullBus(c+10697,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode),4);
        vcdp->fullBus(c+10705,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtval),32);
        vcdp->fullQuad(c+10713,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcycle),64);
        vcdp->fullQuad(c+10729,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_minstret),64);
        vcdp->fullBus(c+10745,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code),4);
        vcdp->fullBus(c+10753,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr),32);
        vcdp->fullBit(c+10761,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid));
        vcdp->fullBus(c+10769,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege),2);
        vcdp->fullBit(c+10777,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_0));
        vcdp->fullBit(c+10785,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_1));
        vcdp->fullBit(c+10793,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_2));
        vcdp->fullBit(c+10801,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                                        << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))));
        vcdp->fullBus(c+10809,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                      >> 0x1cU))),2);
        vcdp->fullBit(c+10817,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake));
        vcdp->fullBit(c+10825,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                 & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))) 
                                | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                    & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))) 
                                   | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                      & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))))));
        vcdp->fullBit(c+10833,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))));
        vcdp->fullBit(c+10841,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))));
        vcdp->fullBit(c+10849,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 0xdU))));
        vcdp->fullBit(c+10857,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))));
        vcdp->fullBus(c+10865,((0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                          >> 0x14U))),12);
        vcdp->fullBit(c+10873,(((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                              >> 0xcU))) 
                                | (2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0xcU))))));
        vcdp->fullBit(c+10881,((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0xcU)))));
        vcdp->fullBus(c+10889,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),16);
        vcdp->fullBus(c+10897,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),16);
        vcdp->fullBus(c+10905,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),17);
        vcdp->fullBus(c+10913,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),17);
        __Vtemp8[0U] = (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW);
        __Vtemp8[1U] = ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                                        >> 0x33U))))) 
                                        << 0x14U)) 
                        | (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                   >> 0x20U)));
        __Vtemp8[2U] = (3U & (VL_NEGATE_I((IData)((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                              >> 0x33U))))) 
                              >> 0xcU));
        VL_EXTEND_WQ(66,34, __Vtemp9, vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH);
        VL_SHIFTL_WWI(66,66,32, __Vtemp10, __Vtemp9, 0x20U);
        VL_ADD_W(3, __Vtemp11, __Vtemp8, __Vtemp10);
        __Vtemp12[0U] = __Vtemp11[0U];
        __Vtemp12[1U] = __Vtemp11[1U];
        __Vtemp12[2U] = (3U & __Vtemp11[2U]);
        vcdp->fullArray(c+10921,(__Vtemp12),66);
        vcdp->fullBit(c+10945,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL))));
        vcdp->fullQuad(c+10953,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1),33);
        vcdp->fullBus(c+10969,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs2),32);
        vcdp->fullArray(c+10977,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator),65);
        vcdp->fullBit(c+11001,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_needRevert));
        vcdp->fullBus(c+11009,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value),6);
        vcdp->fullBit(c+11017,((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
        vcdp->fullBit(c+11025,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done));
        vcdp->fullBit(c+11033,((0x20U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
        vcdp->fullBus(c+11041,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_result),32);
        vcdp->fullBit(c+11049,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))));
        vcdp->fullBus(c+11057,(vlSymsp->TOP__sim__VexRiscv.__PVT__externalInterruptArray_regNext),32);
        vcdp->fullBit(c+11065,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264));
        vcdp->fullBit(c+11073,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768));
        vcdp->fullBit(c+11081,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836));
        vcdp->fullBit(c+11089,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772));
        vcdp->fullBit(c+11097,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_773));
        vcdp->fullBit(c+11105,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833));
        vcdp->fullBit(c+11113,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_834));
        vcdp->fullBit(c+11121,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835));
        vcdp->fullBit(c+11129,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008));
        vcdp->fullBit(c+11137,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032));
        vcdp->fullBit(c+11145,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid)) 
                                      | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))))));
        vcdp->fullQuad(c+11153,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                  ? VL_ULL(0x4e4f4e4520)
                                  : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                      ? VL_ULL(0x5852455420)
                                      : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                          ? VL_ULL(0x4543414c4c)
                                          : VL_ULL(0x3f3f3f3f3f))))),40);
        vcdp->fullQuad(c+11169,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                  ? VL_ULL(0x4e4f4e4520)
                                  : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                      ? VL_ULL(0x5852455420)
                                      : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                          ? VL_ULL(0x4543414c4c)
                                          : VL_ULL(0x3f3f3f3f3f))))),40);
        vcdp->fullQuad(c+11185,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                  ? VL_ULL(0x4e4f4e4520)
                                  : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                      ? VL_ULL(0x5852455420)
                                      : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                          ? VL_ULL(0x4543414c4c)
                                          : VL_ULL(0x3f3f3f3f3f))))),40);
        vcdp->fullBus(c+11201,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                 ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                     ? 0x4a414c52U : 0x4a414c20U)
                                 : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                     ? 0x42202020U : 0x494e4320U))),32);
        vcdp->fullBus(c+11209,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                 ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                     ? 0x504320U : 0x494d53U)
                                 : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                     ? 0x494d49U : 0x525320U))),24);
        vcdp->fullQuad(c+11217,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                  ? VL_ULL(0x4144445f53554220)
                                  : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                      ? VL_ULL(0x534c545f534c5455)
                                      : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                          ? VL_ULL(0x4249545749534520)
                                          : VL_ULL(0x3f3f3f3f3f3f3f3f))))),64);
        vcdp->fullQuad(c+11233,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                  ? VL_ULL(0x584f525f31)
                                  : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                      ? VL_ULL(0x4f525f3120)
                                      : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                          ? VL_ULL(0x414e445f31)
                                          : VL_ULL(0x3f3f3f3f3f))))),40);
        vcdp->fullBit(c+11249,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
        vcdp->fullBus(c+11257,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address),32);
        vcdp->fullBit(c+11265,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError));
        vcdp->fullBit(c+11273,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
        vcdp->fullBus(c+11281,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter),8);
        vcdp->fullBit(c+11289,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                         >> 7U)))));
        vcdp->fullBit(c+11297,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))));
        vcdp->fullBit(c+11305,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent));
        vcdp->fullBit(c+11313,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))));
        vcdp->fullBus(c+11321,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex),3);
        vcdp->fullBus(c+11329,((0x7fU & ((0x80U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                                          ? (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                             >> 5U)
                                          : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)))),7);
        vcdp->fullBit(c+11337,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                      >> 7U))));
        vcdp->fullBus(c+11345,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                            >> 0xcU))),20);
        vcdp->fullBus(c+11353,(((0x3f8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                           >> 2U)) 
                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))),10);
        vcdp->fullBit(c+11361,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))));
        vcdp->fullBit(c+11369,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1)));
        vcdp->fullBit(c+11377,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                      >> 1U))));
        vcdp->fullBus(c+11385,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                            >> 2U))),20);
        vcdp->fullBit(c+11393,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess));
        vcdp->fullBit(c+11401,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging));
        vcdp->fullBit(c+11409,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead));
        vcdp->fullBit(c+11417,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite));
        vcdp->fullBit(c+11425,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute));
        vcdp->fullBit(c+11433,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception));
        vcdp->fullBit(c+11441,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation));
        vcdp->fullBit(c+11449,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid));
        vcdp->fullBit(c+11457,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error));
        vcdp->fullBit(c+11465,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid));
        vcdp->fullBit(c+11473,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way));
        vcdp->fullBus(c+11481,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address),7);
        vcdp->fullBit(c+11489,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid));
        vcdp->fullBit(c+11497,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error));
        vcdp->fullBus(c+11505,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address),20);
        vcdp->fullBit(c+11513,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
        vcdp->fullBit(c+11521,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                      >> 1U))));
        vcdp->fullBus(c+11529,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                            >> 2U))),20);
        vcdp->fullBus(c+11537,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3) 
                                 << 0x18U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2) 
                                               << 0x10U) 
                                              | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1) 
                                                  << 8U) 
                                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read))))),32);
        vcdp->fullBit(c+11545,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent));
        vcdp->fullBus(c+11553,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size),2);
        vcdp->fullBit(c+11561,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_totalyConsistent));
        vcdp->fullBus(c+11569,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask),4);
        vcdp->fullBit(c+11577,((((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                              >> 0xcU)) 
                                 == (0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                                 >> 2U))) 
                                & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
        vcdp->fullBit(c+11585,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_wayInvalidate));
        vcdp->fullBit(c+11593,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen));
        vcdp->fullBus(c+11601,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_size),2);
        vcdp->fullBit(c+11609,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_totalyConsistent));
        vcdp->fullBus(c+11617,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress),32);
        vcdp->fullBit(c+11625,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
        vcdp->fullBit(c+11633,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead));
        vcdp->fullBit(c+11641,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite));
    }
}

void Vsim::traceFullThis__22(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+11649,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute));
        vcdp->fullBit(c+11657,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_exception));
        vcdp->fullBit(c+11665,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling));
        vcdp->fullBit(c+11673,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation));
        vcdp->fullBit(c+11681,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid));
        vcdp->fullBit(c+11689,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error));
        vcdp->fullBus(c+11697,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address),20);
        vcdp->fullBus(c+11705,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0),32);
        vcdp->fullBit(c+11713,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_wayInvalidate));
        vcdp->fullBit(c+11721,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions));
        vcdp->fullBit(c+11729,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_unaligned));
        vcdp->fullBit(c+11737,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
        vcdp->fullBit(c+11745,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone));
        vcdp->fullBus(c+11753,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter),8);
        vcdp->fullBit(c+11761,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                                         >> 7U)))));
        vcdp->fullBit(c+11769,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start));
        vcdp->fullBit(c+11777,((1U & (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                                       & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                      | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                                         & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)))))));
        vcdp->fullBit(c+11785,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)
                                       ? (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))
                                       : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid)))));
        vcdp->fullBit(c+11793,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                      | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))))));
        vcdp->fullBit(c+11801,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent)))));
        vcdp->fullBus(c+11809,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value),3);
        vcdp->fullBit(c+11817,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value))));
        vcdp->fullBit(c+11825,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator));
        vcdp->fullBit(c+11833,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error));
        vcdp->fullBit(c+11841,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_killReg));
        vcdp->fullBit(c+11849,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid)))));
        vcdp->fullBit(c+11857,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext));
        vcdp->fullBit(c+11865,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                                & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext)))));
        vcdp->fullBit(c+11873,(vlTOPp->sim_trace));
        vcdp->fullBit(c+11881,(vlTOPp->sys_clk));
        vcdp->fullBit(c+11889,(vlTOPp->serial_source_valid));
        vcdp->fullBit(c+11897,(vlTOPp->serial_source_ready));
        vcdp->fullBus(c+11905,(vlTOPp->serial_source_data),8);
        vcdp->fullBit(c+11913,(vlTOPp->serial_sink_valid));
        vcdp->fullBit(c+11921,(vlTOPp->serial_sink_ready));
        vcdp->fullBus(c+11929,(vlTOPp->serial_sink_data),8);
        vcdp->fullBus(c+11937,(vlTOPp->serial_sink_data),10);
        vcdp->fullBit(c+11945,(((IData)(vlTOPp->serial_sink_valid) 
                                & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0)))));
        vcdp->fullBus(c+11953,(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg),32);
        vcdp->fullBus(c+11961,(vlSymsp->TOP__sim__VexRiscv.lastStageInstruction),32);
        vcdp->fullBus(c+11969,(vlSymsp->TOP__sim__VexRiscv.lastStagePc),32);
        vcdp->fullBit(c+11977,(vlSymsp->TOP__sim__VexRiscv.lastStageIsValid));
        vcdp->fullBit(c+11985,(vlSymsp->TOP__sim__VexRiscv.lastStageIsFiring));
        vcdp->fullBit(c+11993,((1U & (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                      >> 0x1fU))));
        vcdp->fullBit(c+12001,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_inWfi));
        vcdp->fullBit(c+12009,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid));
        vcdp->fullBus(c+12017,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address),5);
        vcdp->fullBus(c+12025,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data),32);
        vcdp->fullBus(c+12033,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code),4);
        vcdp->fullBit(c+12041,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump));
        vcdp->fullBit(c+12049,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException));
        vcdp->fullBus(c+12057,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[0]),32);
        vcdp->fullBus(c+12058,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[1]),32);
        vcdp->fullBus(c+12059,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[2]),32);
        vcdp->fullBus(c+12060,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[3]),32);
        vcdp->fullBus(c+12061,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[4]),32);
        vcdp->fullBus(c+12062,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[5]),32);
        vcdp->fullBus(c+12063,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[6]),32);
        vcdp->fullBus(c+12064,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[7]),32);
        vcdp->fullBus(c+12065,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[8]),32);
        vcdp->fullBus(c+12066,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[9]),32);
        vcdp->fullBus(c+12067,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[10]),32);
        vcdp->fullBus(c+12068,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[11]),32);
        vcdp->fullBus(c+12069,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[12]),32);
        vcdp->fullBus(c+12070,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[13]),32);
        vcdp->fullBus(c+12071,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[14]),32);
        vcdp->fullBus(c+12072,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[15]),32);
        vcdp->fullBus(c+12073,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[16]),32);
        vcdp->fullBus(c+12074,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[17]),32);
        vcdp->fullBus(c+12075,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[18]),32);
        vcdp->fullBus(c+12076,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[19]),32);
        vcdp->fullBus(c+12077,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[20]),32);
        vcdp->fullBus(c+12078,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[21]),32);
        vcdp->fullBus(c+12079,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[22]),32);
        vcdp->fullBus(c+12080,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[23]),32);
        vcdp->fullBus(c+12081,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[24]),32);
        vcdp->fullBus(c+12082,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[25]),32);
        vcdp->fullBus(c+12083,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[26]),32);
        vcdp->fullBus(c+12084,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[27]),32);
        vcdp->fullBus(c+12085,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[28]),32);
        vcdp->fullBus(c+12086,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[29]),32);
        vcdp->fullBus(c+12087,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[30]),32);
        vcdp->fullBus(c+12088,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[31]),32);
        vcdp->fullBit(c+12313,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                & ((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                                >> 2U)) 
                                   == (0xfffffU & (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                                   >> 0xcU))))));
        vcdp->fullBit(c+12321,(1U));
        vcdp->fullBus(c+12329,(0U),32);
        vcdp->fullBus(c+12337,(0xfU),4);
        vcdp->fullBit(c+12345,(0U));
        vcdp->fullBus(c+12353,(0U),2);
        vcdp->fullBus(c+12361,(0U),4);
        vcdp->fullBus(c+12369,(0U),13);
        vcdp->fullBus(c+12377,(1U),2);
        vcdp->fullBus(c+12385,(2U),2);
        vcdp->fullBus(c+12393,(3U),2);
        vcdp->fullBus(c+12401,(0xffffU),16);
        vcdp->fullBit(c+12409,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fetch_isRemoved));
        vcdp->fullBit(c+12417,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SW));
        vcdp->fullBit(c+12425,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SR));
        vcdp->fullBit(c+12433,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SO));
        vcdp->fullBit(c+12441,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SI));
        vcdp->fullBit(c+12449,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PW));
        vcdp->fullBit(c+12457,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PR));
        vcdp->fullBit(c+12465,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PO));
        vcdp->fullBit(c+12473,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PI));
        vcdp->fullBus(c+12481,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_FM),4);
        vcdp->fullBus(c+12489,(5U),3);
        vcdp->fullBit(c+12497,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_exclusiveOk));
        vcdp->fullBit(c+12505,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_bypassTranslation));
        vcdp->fullBit(c+12513,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBus_rsp_payload_last));
        vcdp->fullBit(c+12521,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_bypassTranslation));
        vcdp->fullBus(c+12529,(2U),4);
        vcdp->fullBit(c+12537,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_output_payload_rsp_error));
        vcdp->fullBit(c+12545,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_output_payload_isRvc));
        vcdp->fullBus(c+12553,(0x42U),26);
    }
}
