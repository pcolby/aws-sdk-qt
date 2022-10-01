// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETELAUNCHCONFIGURATIONRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DeleteLaunchConfigurationResponse;

class DeleteLaunchConfigurationResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DeleteLaunchConfigurationResponsePrivate(DeleteLaunchConfigurationResponse * const q);

    void parseDeleteLaunchConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLaunchConfigurationResponse)
    Q_DISABLE_COPY(DeleteLaunchConfigurationResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
