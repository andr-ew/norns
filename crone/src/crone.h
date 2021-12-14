#ifndef _CRONE_H_
#define _CRONE_H_

#include "Commands.h"

// void crone_hello() { std::cout << "hello" << std::endl; }

// void crone_goodbye() {
//   std::cout << "goodbye" << std::endl;
//   OscInterface::quitFlag = true;
// }

// void crone_quit() { OscInterface::quitFlag = true; }


// FIXME: need static references to polls, clients

void crone_poll_start_vu() { vuPoll->start(); }
void crone_poll_stop_vu() { vuPoll->stop(); }

void crone_set_level_adc(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_LEVEL_ADC, arg0);
}

void crone_set_level_dac(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_LEVEL_DAC, arg0);
}

void crone_set_level_ext(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_LEVEL_EXT, arg0);
}

void crone_set_level_cut_master(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_LEVEL_CUT_MASTER, arg0);
}

void crone_set_level_ext_rev(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_LEVEL_EXT_AUX, arg0);
}

void crone_set_level_rev_dac(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_LEVEL_AUX_DAC, arg0);
}

void crone_set_level_monitor(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_LEVEL_MONITOR, arg0);
}

void crone_set_level_monitor_mix(int arg0, float arg1) {
  Commands::mixerCommands.post(Commands::Id::SET_LEVEL_MONITOR_MIX, arg0, arg1);
}

void crone_set_level_monitor_rev(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_LEVEL_MONITOR_AUX, arg0);
}

void crone_set_level_compressor_mix(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_LEVEL_INS_MIX, arg0);
}

void crone_set_enabled_compressor(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_ENABLED_COMPRESSOR, arg0);
}

void crone_set_enabled_reverb(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_ENABLED_REVERB, arg0);
}

void crone_set_param_compressor_ratio(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_PARAM_COMPRESSOR,
                               CompressorParam::RATIO, arg0);
}

void crone_set_param_compressor_threshold(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_PARAM_COMPRESSOR,
                               CompressorParam::THRESHOLD, arg0);
}

void crone_set_param_compressor_attack(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_PARAM_COMPRESSOR,
                               CompressorParam::ATTACK, arg0);
}

void crone_set_param_compressor_release(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_PARAM_COMPRESSOR,
                               CompressorParam::RELEASE, arg0);
}

void crone_set_param_compressor_gain_pre(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_PARAM_COMPRESSOR,
                               CompressorParam::GAIN_PRE, arg0);
}

void crone_set_param_compressor_gain_post(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_PARAM_COMPRESSOR,
                               CompressorParam::GAIN_POST, arg0);
}

void crone_set_param_reverb_pre_del(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_PARAM_REVERB,
                               ReverbParam::PRE_DEL, arg0);
}

void crone_set_param_reverb_lf_fc(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_PARAM_REVERB,
                               ReverbParam::LF_FC, arg0);
}

void crone_set_param_reverb_low_rt60(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_PARAM_REVERB,
                               ReverbParam::LOW_RT60, arg0);
}

void crone_set_param_reverb_mid_rt60(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_PARAM_REVERB,
                               ReverbParam::MID_RT60, arg0);
}

void crone_set_param_reverb_hf_damp(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_PARAM_REVERB,
                               ReverbParam::HF_DAMP, arg0);
}

void crone_set_enabled_cut(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_ENABLED_CUT, arg0, arg1);
}

void crone_set_level_cut(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_LEVEL_CUT, arg0, arg1);
}

void crone_set_pan_cut(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_PAN_CUT, arg0, arg1);
}

void crone_set_level_adc_cut(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_LEVEL_ADC_CUT, arg0);
}

void crone_set_level_ext_cut(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_LEVEL_EXT_CUT, arg0);
}

void crone_set_level_tape_cut(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_LEVEL_TAPE_CUT, arg0);
}

void crone_set_level_cut_rev(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_LEVEL_CUT_AUX, arg0);
}

void crone_set_level_in_cut(int arg0, int arg1, float arg2) {
  Commands::softcutCommands.post(Commands::Id::SET_LEVEL_IN_CUT, arg0, arg1,
                                 arg2);
}

void crone_set_level_cut_cut(int arg0, int arg1, float arg2) {
  Commands::softcutCommands.post(Commands::Id::SET_LEVEL_CUT_CUT, arg0, arg1,
                                 arg2);
}

void crone_set_param_cut_rate(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_RATE, arg0, arg1);
}

void crone_set_param_cut_loop_start(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_LOOP_START, arg0, arg1);
}

void crone_set_param_cut_loop_end(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_LOOP_END, arg0, arg1);
}

void crone_set_param_cut_loop_flag(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_LOOP_FLAG, arg0, arg1);
}

void crone_set_param_cut_fade_time(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_FADE_TIME, arg0, arg1);
}

void crone_set_param_cut_rec_level(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_REC_LEVEL, arg0, arg1);
}

void crone_set_param_cut_pre_level(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_PRE_LEVEL, arg0, arg1);
}

void crone_set_param_cut_rec_flag(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_REC_FLAG, arg0, arg1);
}

void crone_set_param_cut_play_flag(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_PLAY_FLAG, arg0, arg1);
}

void crone_set_param_cut_rec_offset(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_REC_OFFSET, arg0, arg1);
}

void crone_set_param_cut_position(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_POSITION, arg0, arg1);
}

void crone_set_param_cut_pre_filter_fc(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_PRE_FILTER_FC, arg0,
                                 arg1);
}

void crone_set_param_cut_pre_filter_fc_mod(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_PRE_FILTER_FC_MOD, arg0,
                                 arg1);
}

void crone_set_param_cut_pre_filter_rq(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_PRE_FILTER_RQ, arg0,
                                 arg1);
}

void crone_set_param_cut_pre_filter_lp(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_PRE_FILTER_LP, arg0,
                                 arg1);
}

void crone_set_param_cut_pre_filter_hp(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_PRE_FILTER_HP, arg0,
                                 arg1);
}

void crone_set_param_cut_pre_filter_bp(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_PRE_FILTER_BP, arg0,
                                 arg1);
}

void crone_set_param_cut_pre_filter_br(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_PRE_FILTER_BR, arg0,
                                 arg1);
}

void crone_set_param_cut_pre_filter_dry(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_PRE_FILTER_DRY, arg0,
                                 arg1);
}

void crone_set_param_cut_post_filter_rq(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_POST_FILTER_RQ, arg0,
                                 arg1);
}

void crone_set_param_cut_post_filter_lp(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_POST_FILTER_LP, arg0,
                                 arg1);
}

void crone_set_param_cut_post_filter_hp(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_POST_FILTER_HP, arg0,
                                 arg1);
}

void crone_set_param_cut_post_filter_bp(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_POST_FILTER_BP, arg0,
                                 arg1);
}

void crone_set_param_cut_post_filter_br(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_POST_FILTER_BR, arg0,
                                 arg1);
}

void crone_set_param_cut_post_filter_dry(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_POST_FILTER_DRY, arg0,
                                 arg1);
}

void crone_set_param_cut_voice_sync(int arg0, int arg1, float arg2) {
    Commands::softcutCommands.post(Commands::Id::SET_CUT_VOICE_SYNC, arg0, arg1,
                                 arg2);
}

void crone_set_param_cut_pre_fade_window(int arg0, float arg1) {

// FIXME: this escaped the script because it is converting ->f to int. is that on purpose?
//  float x = argv[0]->f;
float x = arg0;
  auto t = std::thread([x] { FadeCurves::setPreWindowRatio(x); });
  t.detach();
}

void crone_set_param_cut_rec_fade_delay(int arg0, float arg1) {

// FIXME: this escaped the script because it is converting ->f to int. is that on purpose?
//  float x = argv[0]->f;
float x = arg0;
  auto t = std::thread([x] { FadeCurves::setRecDelayRatio(x); });
  t.detach();
}

void crone_set_param_cut_pre_fade_shape(int arg0, float arg1) {

// FIXME: this escaped the script because it is converting ->f to int. is that on purpose?
//  float x = argv[0]->f;
float x = arg0;
  auto t = std::thread(
      [x] { FadeCurves::setPreShape(static_cast<FadeCurves::Shape>(x)); });
  t.detach();
}
 rg0, float arg1) {


// FIXME: this escaped the script because it is converting ->f to int. is that on purpose?
//  float x = argv[0]->f;
float x = arg0;  auto t = std::thread(
      [x] { FadeCurves::setRecShape(static_cast<FadeCurves::Shape>(x)); });
  t.detach();
}

void crone_set_param_cut_level_slew_time(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_LEVEL_SLEW_TIME, arg0,
                                 arg1);
}

void crone_set_param_cut_pan_slew_time(int arg0, float arg1) { 
  Commands::softcutCommands.post(Commands::Id::SET_CUT_PAN_SLEW_TIME, arg0,
                                 arg1);
}

void crone_set_param_cut_recpre_slew_time(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_RECPRE_SLEW_TIME, arg0,
                                 arg1);
}

void crone_set_param_cut_rate_slew_time(int arg0, float arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_RATE_SLEW_TIME, arg0,
                                 arg1);
}

void crone_set_param_cut_buffer(int arg0, int arg1) {
  Commands::softcutCommands.post(Commands::Id::SET_CUT_BUFFER, arg0, arg1);
}

void crone_softcut_buffer_read_mono(const char *arg0, float arg1, float arg2,
                                    float arg3, int arg4, int arg5, float arg6,
                                    float arg7) {

// FIXME: put defaults up there ^

  // float startSrc = 0.f;
  // float startDst = 0.f;
  // float dur = -1.f;
  // int chanSrc = 0;
  // int chanDst = 0;
  // float preserve = 0.f;
  // float mix = 1.f;
  // if (argc < 1) {
  //   std::cerr << "/softcut/buffer/read_mono requires at least one argument "
  //                "(file path)"
  //             << std::endl;
  //   return;
  // }
  // if (argc > 1) {
  //   startSrc = arg1;
  // }
  // if (argc > 2) {
  //   startDst = arg2;
  // }
  // if (argc > 3) {
  //   dur = arg3;
  // }
  // if (argc > 4) {
  //   chanSrc = arg4;
  // }
  // if (argc > 5) {
  //   chanDst = arg5;
  // }
  // if (argc > 6) {
  //   preserve = arg6;
  // }
  // if (argc > 7) {
  //   mix = arg7;
  // }
  // const char *str = arg0;
  softCutClient->readBufferMono(arg0, startSrc, startDst, dur, chanSrc, chanDst,
                                preserve, mix);
}

void crone_softcut_buffer_read_stereo(const char *arg0, float arg1, float arg2,
                                      float arg3, float arg4, float arg5) {
                                        // FIXME: defaults
  // float startSrc = 0.f;
  // float startDst = 0.f;
  // float dur = -1.f;
  // float preserve = 0.f;
  // float mix = 1.f;
  // if (argc < 1) {
  //   std::cerr << "/softcut/buffer/read_stereo requires at least one argument "
  //                "(file path)"
  //             << std::endl;
  //   return;
  // }
  // if (argc > 1) {
  //   startSrc = arg1;
  // }
  // if (argc > 2) {
  //   startDst = arg2;
  // }
  // if (argc > 3) {
  //   dur = arg3;
  // }
  // if (argc > 4) {
  //   preserve = arg4;
  // }
  // if (argc > 5) {
  //   mix = arg5;
  // }
  const char *str = arg0;
  softCutClient->readBufferStereo(str, startSrc, startDst, dur, preserve, mix);
}

void crone_softcut_buffer_write_mono(const char *arg0, float arg1, float arg2,
                                     int arg3) {
  // FIXME: defaults
  
  // float start = 0.f;
  // float dur = -1.f;
  // int chan = 0;
  // if (argc < 1) {
  //   std::cerr << "/softcut/buffer/write_mono requires at least one argument "
  //                "(file path)"
  //             << std::endl;
  //   return;
  // }
  // if (argc > 1) {
  //   start = arg1;
  // }
  // if (argc > 2) {
  //   dur = arg2;
  // }
  // if (argc > 3) {
  //   chan = arg3;
  // }
  const char *str = arg0;
  softCutClient->writeBufferMono(str, start, dur, chan);
}

void crone_softcut_buffer_write_stereo(const char *arg0, float arg1,
                                       float arg2) {
  
  // FIXME: default args
  // float start = 0.f;
  // float dur = -1.f;
  
  const char *str = arg0;
  softCutClient->writeBufferStereo(str, start, dur);
}

void crone_softcut_buffer_clear() {
  softCutClient->clearBuffer(0);
  softCutClient->clearBuffer(1);
}

void crone_softcut_buffer_clear_channel(int arg0) {
  softCutClient->clearBuffer(arg0);
}

void crone_softcut_buffer_clear_region(float arg0, float arg1) {
  softCutClient->clearBuffer(0, arg0, arg1);
  softCutClient->clearBuffer(1, arg0, arg1);
}

void crone_softcut_buffer_clear_region_channel(int arg0, float arg1,
                                               float arg2) {
  softCutClient->clearBuffer(arg0, arg1, arg2);
}

void crone_softcut_buffer_clear_fade_region(float arg0, float arg1, float arg2,
                                            float arg3) {
  // float dur = -1;
  // float fadeTime = 0;
  // float preserve = 0;
  // if (argc < 1) {
  //   return;
  // }
  // if (argc > 1) {
  //   dur = arg1;
  // }
  // if (argc > 2) {
  //   fadeTime = arg2;
  // }
  // if (argc > 3) {
  //   preserve = arg3;
  // }
  softCutClient->clearBufferWithFade(0, arg0, dur, fadeTime, preserve);
  softCutClient->clearBufferWithFade(1, arg0, dur, fadeTime, preserve);
}

void crone_softcut_buffer_clear_fade_region_channel(int arg0, float arg1,
                                                    float arg2, float arg3,
                                                    float arg4) {
  // float dur = -1;
  // float fadeTime = 0;
  // float preserve = 0;
  // if (argc < 2) {
  //   return;
  // }
  // if (argc > 3) {
  //   dur = arg2;
  // }
  // if (argc > 4) {
  //   fadeTime = arg3;
  // }
  // if (argc > 5) {
  //   preserve = arg4;
  // }
  softCutClient->clearBufferWithFade(arg0, arg1, dur, fadeTime, preserve);
}

void crone_softcut_buffer_copy_mono(int arg0, int arg1, float arg2, float arg3,
                                    float arg4, float arg5, float arg6,
                                    int arg7) {
  // float dur = -1.f;
  // float fadeTime = 0.f;
  // float preserve = 0.f;
  // bool reverse = false;
  // if (argc < 4) {
  //   return;
  // }
  // if (argc > 4) {
  //   dur = arg4;
  // }
  // if (argc > 5) {
  //   fadeTime = arg5;
  // }
  // if (argc > 6) {
  //   preserve = arg6;
  // }
  // if (argc > 7) {
  //   reverse = arg7 != 0;
  // }

  softCutClient->copyBuffer(arg0, arg1, arg2, arg3, dur, fadeTime, preserve,
                            reverse);
}

void crone_softcut_buffer_copy_stereo(float arg0, float arg1, float arg2,
                                      float arg3, float arg4, int arg5) {
  float dur = -1.f;
  float fadeTime = 0.f;
  float preserve = 0.f;
  bool reverse = false;
  if (argc < 2) {
    return;
  }
  if (argc > 2) {
    dur = arg2;
  }
  if (argc > 3) {
    fadeTime = arg3;
  }
  if (argc > 4) {
    preserve = arg4;
  }
  if (argc > 5) {
    reverse = arg5 != 0;
  }

  softCutClient->copyBuffer(0, 0, arg0, arg1, dur, fadeTime, preserve, reverse);
  softCutClient->copyBuffer(1, 1, arg0, arg1, dur, fadeTime, preserve, reverse);
}

void crone_softcut_buffer_render(int arg0, float arg1, float arg2, int arg3) {
  int sampleCt = 128;
  if (argc < 3) {
    return;
  }

  int ch = arg0;
  if (argc > 3) {
    sampleCt = arg3;
  }

  softCutClient->renderSamples(
      ch, arg1, arg2, sampleCt,
      [=](float secPerSample, float start, size_t count, float *samples) {
        lo_blob bl = lo_blob_new(count * sizeof(float), samples);
        lo_send(matronAddress, "/softcut/buffer/render_callback", "iffb", ch,
                secPerSample, start, bl);
      });
}

void crone_softcut_query_position(int arg0) {
  if (argc < 1)
    return;
  int idx = arg0;
  float pos = softCutClient->getPosition(idx);
  lo_send(matronAddress, "/poll/softcut/position", "if", idx, pos);
}

void crone_softcut_reset() {

  softCutClient->clearBuffer(0, 0, -1);
  softCutClient->clearBuffer(1, 0, -1);

  softCutClient->reset();
  for (int i = 0; i < SoftcutClient::NumVoices; ++i) {
    phasePoll->stop();
  }
}

void crone_set_param_cut_phase_quant(int arg0, float arg1) {

  softCutClient->setPhaseQuant(arg0, arg1);
}

void crone_set_param_cut_phase_offset(int arg0, float arg1) {

  softCutClient->setPhaseOffset(arg0, arg1);
}

void crone_poll_start_cut_phase() { phasePoll->start(); }

void crone_poll_stop_cut_phase() { phasePoll->stop(); }

void crone_tape_record_open(const char *arg0) {

  mixerClient->openTapeRecord(arg0);
}

void crone_tape_record_start() { mixerClient->startTapeRecord(); }

void crone_tape_record_stop() { mixerClient->stopTapeRecord(); }

void crone_tape_play_open(const char *arg0) {

  mixerClient->openTapePlayback(arg0);
}

void crone_tape_play_start() { mixerClient->startTapePlayback(); }

void crone_tape_play_stop() { mixerClient->stopTapePlayback(); }

void crone_set_level_tape(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_LEVEL_TAPE, arg0);
}

void crone_set_level_tape_rev(float arg0) {
  Commands::mixerCommands.post(Commands::Id::SET_LEVEL_TAPE_AUX, arg0);
}

#endif