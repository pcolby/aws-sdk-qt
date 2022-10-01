// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLAUNCHCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEAPPLAUNCHCONFIGURATIONRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class DeleteAppLaunchConfigurationResponse;

class DeleteAppLaunchConfigurationResponsePrivate : public SmsResponsePrivate {

public:

    explicit DeleteAppLaunchConfigurationResponsePrivate(DeleteAppLaunchConfigurationResponse * const q);

    void parseDeleteAppLaunchConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAppLaunchConfigurationResponse)
    Q_DISABLE_COPY(DeleteAppLaunchConfigurationResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
