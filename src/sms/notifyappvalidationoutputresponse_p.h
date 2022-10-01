// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYAPPVALIDATIONOUTPUTRESPONSE_P_H
#define QTAWS_NOTIFYAPPVALIDATIONOUTPUTRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class NotifyAppValidationOutputResponse;

class NotifyAppValidationOutputResponsePrivate : public SmsResponsePrivate {

public:

    explicit NotifyAppValidationOutputResponsePrivate(NotifyAppValidationOutputResponse * const q);

    void parseNotifyAppValidationOutputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(NotifyAppValidationOutputResponse)
    Q_DISABLE_COPY(NotifyAppValidationOutputResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
