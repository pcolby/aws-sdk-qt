// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPVALIDATIONOUTPUTRESPONSE_P_H
#define QTAWS_GETAPPVALIDATIONOUTPUTRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class GetAppValidationOutputResponse;

class GetAppValidationOutputResponsePrivate : public SmsResponsePrivate {

public:

    explicit GetAppValidationOutputResponsePrivate(GetAppValidationOutputResponse * const q);

    void parseGetAppValidationOutputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAppValidationOutputResponse)
    Q_DISABLE_COPY(GetAppValidationOutputResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
