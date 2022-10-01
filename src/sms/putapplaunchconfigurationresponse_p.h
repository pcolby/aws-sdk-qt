// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPLAUNCHCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTAPPLAUNCHCONFIGURATIONRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class PutAppLaunchConfigurationResponse;

class PutAppLaunchConfigurationResponsePrivate : public SmsResponsePrivate {

public:

    explicit PutAppLaunchConfigurationResponsePrivate(PutAppLaunchConfigurationResponse * const q);

    void parsePutAppLaunchConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAppLaunchConfigurationResponse)
    Q_DISABLE_COPY(PutAppLaunchConfigurationResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
