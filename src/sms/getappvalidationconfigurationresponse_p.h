// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPVALIDATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETAPPVALIDATIONCONFIGURATIONRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class GetAppValidationConfigurationResponse;

class GetAppValidationConfigurationResponsePrivate : public SmsResponsePrivate {

public:

    explicit GetAppValidationConfigurationResponsePrivate(GetAppValidationConfigurationResponse * const q);

    void parseGetAppValidationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAppValidationConfigurationResponse)
    Q_DISABLE_COPY(GetAppValidationConfigurationResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
