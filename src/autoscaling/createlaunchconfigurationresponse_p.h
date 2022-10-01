// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATELAUNCHCONFIGURATIONRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class CreateLaunchConfigurationResponse;

class CreateLaunchConfigurationResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit CreateLaunchConfigurationResponsePrivate(CreateLaunchConfigurationResponse * const q);

    void parseCreateLaunchConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLaunchConfigurationResponse)
    Q_DISABLE_COPY(CreateLaunchConfigurationResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
