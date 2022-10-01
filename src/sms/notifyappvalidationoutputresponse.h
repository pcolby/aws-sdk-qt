// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYAPPVALIDATIONOUTPUTRESPONSE_H
#define QTAWS_NOTIFYAPPVALIDATIONOUTPUTRESPONSE_H

#include "smsresponse.h"
#include "notifyappvalidationoutputrequest.h"

namespace QtAws {
namespace Sms {

class NotifyAppValidationOutputResponsePrivate;

class QTAWSSMS_EXPORT NotifyAppValidationOutputResponse : public SmsResponse {
    Q_OBJECT

public:
    NotifyAppValidationOutputResponse(const NotifyAppValidationOutputRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const NotifyAppValidationOutputRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NotifyAppValidationOutputResponse)
    Q_DISABLE_COPY(NotifyAppValidationOutputResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
