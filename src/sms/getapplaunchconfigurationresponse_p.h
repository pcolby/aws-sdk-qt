// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLAUNCHCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETAPPLAUNCHCONFIGURATIONRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class GetAppLaunchConfigurationResponse;

class GetAppLaunchConfigurationResponsePrivate : public SmsResponsePrivate {

public:

    explicit GetAppLaunchConfigurationResponsePrivate(GetAppLaunchConfigurationResponse * const q);

    void parseGetAppLaunchConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAppLaunchConfigurationResponse)
    Q_DISABLE_COPY(GetAppLaunchConfigurationResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
