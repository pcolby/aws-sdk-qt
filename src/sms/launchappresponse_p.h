// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LAUNCHAPPRESPONSE_P_H
#define QTAWS_LAUNCHAPPRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class LaunchAppResponse;

class LaunchAppResponsePrivate : public SmsResponsePrivate {

public:

    explicit LaunchAppResponsePrivate(LaunchAppResponse * const q);

    void parseLaunchAppResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LaunchAppResponse)
    Q_DISABLE_COPY(LaunchAppResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
