/*
 * Copyright 2018-present ifm electronic, gmbh
 * Copyright 2017 Love Park Robotics, LLC
 * SPDX-License-Identifier: Apache-2.0
 */

#include <ifm3d/tools/imager_types_app.h>
#include <iostream>
#include <string>
#include <ifm3d/tools/cmdline_app.h>
#include <ifm3d/camera/camera.h>

ifm3d::ImagerTypesApp::ImagerTypesApp(int argc,
                                      const char** argv,
                                      const std::string& name)
  : ifm3d::CmdLineApp(argc, argv, name)
{ }

int
ifm3d::ImagerTypesApp::Run()
{
  if (this->vm_->count("help"))
    {
      this->_LocalHelp();
      return 0;
    }

  json im_types(this->cam_->ImagerTypes());
  std::cout << im_types.dump(2) << std::endl;

  return 0;
}
