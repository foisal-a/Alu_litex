// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


void Vsim::traceChgThis__21(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+11201,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                    ? 0x4a414c52U : 0x4a414c20U)
                                : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                    ? 0x42202020U : 0x494e4320U))),32);
        vcdp->chgBus(c+11209,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                    ? 0x504320U : 0x494d53U)
                                : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                    ? 0x494d49U : 0x525320U))),24);
        vcdp->chgQuad(c+11217,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                 ? VL_ULL(0x4144445f53554220)
                                 : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                     ? VL_ULL(0x534c545f534c5455)
                                     : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                         ? VL_ULL(0x4249545749534520)
                                         : VL_ULL(0x3f3f3f3f3f3f3f3f))))),64);
        vcdp->chgQuad(c+11233,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                 ? VL_ULL(0x584f525f31)
                                 : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                     ? VL_ULL(0x4f525f3120)
                                     : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                         ? VL_ULL(0x414e445f31)
                                         : VL_ULL(0x3f3f3f3f3f))))),40);
        vcdp->chgBit(c+11249,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
        vcdp->chgBus(c+11257,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address),32);
        vcdp->chgBit(c+11265,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError));
        vcdp->chgBit(c+11273,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
        vcdp->chgBus(c+11281,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter),8);
        vcdp->chgBit(c+11289,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                        >> 7U)))));
        vcdp->chgBit(c+11297,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))));
        vcdp->chgBit(c+11305,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent));
        vcdp->chgBit(c+11313,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))));
        vcdp->chgBus(c+11321,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex),3);
        vcdp->chgBus(c+11329,((0x7fU & ((0x80U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                                         ? (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                            >> 5U) : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)))),7);
        vcdp->chgBit(c+11337,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                     >> 7U))));
        vcdp->chgBus(c+11345,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                           >> 0xcU))),20);
        vcdp->chgBus(c+11353,(((0x3f8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                          >> 2U)) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))),10);
        vcdp->chgBit(c+11361,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))));
        vcdp->chgBit(c+11369,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1)));
        vcdp->chgBit(c+11377,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                     >> 1U))));
        vcdp->chgBus(c+11385,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                           >> 2U))),20);
        vcdp->chgBit(c+11393,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess));
        vcdp->chgBit(c+11401,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging));
        vcdp->chgBit(c+11409,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead));
        vcdp->chgBit(c+11417,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite));
        vcdp->chgBit(c+11425,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute));
        vcdp->chgBit(c+11433,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception));
        vcdp->chgBit(c+11441,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation));
        vcdp->chgBit(c+11449,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid));
        vcdp->chgBit(c+11457,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error));
        vcdp->chgBit(c+11465,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid));
        vcdp->chgBit(c+11473,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way));
        vcdp->chgBus(c+11481,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address),7);
        vcdp->chgBit(c+11489,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid));
        vcdp->chgBit(c+11497,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error));
        vcdp->chgBus(c+11505,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address),20);
        vcdp->chgBit(c+11513,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
        vcdp->chgBit(c+11521,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                     >> 1U))));
        vcdp->chgBus(c+11529,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                           >> 2U))),20);
        vcdp->chgBus(c+11537,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3) 
                                << 0x18U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2) 
                                              << 0x10U) 
                                             | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1) 
                                                 << 8U) 
                                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read))))),32);
        vcdp->chgBit(c+11545,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent));
        vcdp->chgBus(c+11553,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size),2);
        vcdp->chgBit(c+11561,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_totalyConsistent));
        vcdp->chgBus(c+11569,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask),4);
        vcdp->chgBit(c+11577,((((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                             >> 0xcU)) 
                                == (0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                                >> 2U))) 
                               & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
        vcdp->chgBit(c+11585,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_wayInvalidate));
        vcdp->chgBit(c+11593,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen));
        vcdp->chgBus(c+11601,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_size),2);
        vcdp->chgBit(c+11609,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_totalyConsistent));
        vcdp->chgBus(c+11617,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress),32);
        vcdp->chgBit(c+11625,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
        vcdp->chgBit(c+11633,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead));
        vcdp->chgBit(c+11641,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite));
        vcdp->chgBit(c+11649,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute));
        vcdp->chgBit(c+11657,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_exception));
        vcdp->chgBit(c+11665,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling));
        vcdp->chgBit(c+11673,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation));
        vcdp->chgBit(c+11681,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid));
        vcdp->chgBit(c+11689,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error));
        vcdp->chgBus(c+11697,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address),20);
        vcdp->chgBus(c+11705,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0),32);
        vcdp->chgBit(c+11713,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_wayInvalidate));
        vcdp->chgBit(c+11721,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions));
        vcdp->chgBit(c+11729,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_unaligned));
        vcdp->chgBit(c+11737,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
        vcdp->chgBit(c+11745,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone));
        vcdp->chgBus(c+11753,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter),8);
        vcdp->chgBit(c+11761,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                                        >> 7U)))));
        vcdp->chgBit(c+11769,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start));
        vcdp->chgBit(c+11777,((1U & (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                     | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                                        & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)))))));
        vcdp->chgBit(c+11785,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)
                                      ? (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))
                                      : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid)))));
        vcdp->chgBit(c+11793,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                     | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))))));
        vcdp->chgBit(c+11801,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent)))));
        vcdp->chgBus(c+11809,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value),3);
        vcdp->chgBit(c+11817,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value))));
        vcdp->chgBit(c+11825,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator));
        vcdp->chgBit(c+11833,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error));
        vcdp->chgBit(c+11841,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_killReg));
        vcdp->chgBit(c+11849,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid)))));
        vcdp->chgBit(c+11857,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext));
        vcdp->chgBit(c+11865,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext)))));
    }
}

void Vsim::traceChgThis__23(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+11873,(vlTOPp->sim_trace));
        vcdp->chgBit(c+11881,(vlTOPp->sys_clk));
        vcdp->chgBit(c+11889,(vlTOPp->serial_source_valid));
        vcdp->chgBit(c+11897,(vlTOPp->serial_source_ready));
        vcdp->chgBus(c+11905,(vlTOPp->serial_source_data),8);
        vcdp->chgBit(c+11913,(vlTOPp->serial_sink_valid));
        vcdp->chgBit(c+11921,(vlTOPp->serial_sink_ready));
        vcdp->chgBus(c+11929,(vlTOPp->serial_sink_data),8);
        vcdp->chgBus(c+11937,(vlTOPp->serial_sink_data),10);
        vcdp->chgBit(c+11945,(((IData)(vlTOPp->serial_sink_valid) 
                               & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0)))));
        vcdp->chgBus(c+11953,(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg),32);
        vcdp->chgBus(c+11961,(vlSymsp->TOP__sim__VexRiscv.lastStageInstruction),32);
        vcdp->chgBus(c+11969,(vlSymsp->TOP__sim__VexRiscv.lastStagePc),32);
        vcdp->chgBit(c+11977,(vlSymsp->TOP__sim__VexRiscv.lastStageIsValid));
        vcdp->chgBit(c+11985,(vlSymsp->TOP__sim__VexRiscv.lastStageIsFiring));
        vcdp->chgBit(c+11993,((1U & (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                     >> 0x1fU))));
        vcdp->chgBit(c+12001,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_inWfi));
        vcdp->chgBit(c+12009,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid));
        vcdp->chgBus(c+12017,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address),5);
        vcdp->chgBus(c+12025,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data),32);
        vcdp->chgBus(c+12033,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code),4);
        vcdp->chgBit(c+12041,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump));
        vcdp->chgBit(c+12049,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException));
        vcdp->chgBus(c+12057,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[0]),32);
        vcdp->chgBus(c+12058,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[1]),32);
        vcdp->chgBus(c+12059,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[2]),32);
        vcdp->chgBus(c+12060,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[3]),32);
        vcdp->chgBus(c+12061,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[4]),32);
        vcdp->chgBus(c+12062,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[5]),32);
        vcdp->chgBus(c+12063,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[6]),32);
        vcdp->chgBus(c+12064,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[7]),32);
        vcdp->chgBus(c+12065,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[8]),32);
        vcdp->chgBus(c+12066,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[9]),32);
        vcdp->chgBus(c+12067,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[10]),32);
        vcdp->chgBus(c+12068,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[11]),32);
        vcdp->chgBus(c+12069,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[12]),32);
        vcdp->chgBus(c+12070,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[13]),32);
        vcdp->chgBus(c+12071,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[14]),32);
        vcdp->chgBus(c+12072,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[15]),32);
        vcdp->chgBus(c+12073,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[16]),32);
        vcdp->chgBus(c+12074,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[17]),32);
        vcdp->chgBus(c+12075,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[18]),32);
        vcdp->chgBus(c+12076,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[19]),32);
        vcdp->chgBus(c+12077,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[20]),32);
        vcdp->chgBus(c+12078,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[21]),32);
        vcdp->chgBus(c+12079,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[22]),32);
        vcdp->chgBus(c+12080,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[23]),32);
        vcdp->chgBus(c+12081,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[24]),32);
        vcdp->chgBus(c+12082,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[25]),32);
        vcdp->chgBus(c+12083,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[26]),32);
        vcdp->chgBus(c+12084,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[27]),32);
        vcdp->chgBus(c+12085,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[28]),32);
        vcdp->chgBus(c+12086,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[29]),32);
        vcdp->chgBus(c+12087,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[30]),32);
        vcdp->chgBus(c+12088,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[31]),32);
        vcdp->chgBit(c+12313,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                               & ((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                               >> 2U)) 
                                  == (0xfffffU & (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                                  >> 0xcU))))));
    }
}
