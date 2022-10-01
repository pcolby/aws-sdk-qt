// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPVALIDATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTAPPVALIDATIONCONFIGURATIONRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class PutAppValidationConfigurationResponse;

class PutAppValidationConfigurationResponsePrivate : public SmsResponsePrivate {

public:

    explicit PutAppValidationConfigurationResponsePrivate(PutAppValidationConfigurationResponse * const q);

    void parsePutAppValidationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAppValidationConfigurationResponse)
    Q_DISABLE_COPY(PutAppValidationConfigurationResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
