/**
 * Copyright 2014-2020 [fisco-dev]
 *
 * <p>Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of the License at
 *
 * <p>http://www.apache.org/licenses/LICENSE-2.0
 *
 * <p>Unless required by applicable law or agreed to in writing, software distributed under the
 * License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing permissions and
 * limitations under the License.
 */
package org.fisco.bcos.sdk;

import org.fisco.bcos.sdk.amop.Amop;
import org.fisco.bcos.sdk.common.ConfigOption;
import org.fisco.bcos.sdk.rpc.Rpc;
import org.fisco.bcos.sdk.subscribe.EventSubscribe;

public class BcosSDK {

  static {
    System.loadLibrary("fisco-cpp-sdk");
  }

  public static native BcosSDK build(String configPath);

  public static native BcosSDK build(ConfigOption configOption);

  public native Rpc getRpc(String group);

  public native Amop getAmop();

  public native EventSubscribe getEventSubscribe(String group);

  public native void stopAll();
}