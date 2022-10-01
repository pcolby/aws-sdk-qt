// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCONTACTMETHODVERIFICATIONRESPONSE_H
#define QTAWS_SENDCONTACTMETHODVERIFICATIONRESPONSE_H

#include "lightsailresponse.h"
#include "sendcontactmethodverificationrequest.h"

namespace QtAws {
namespace Lightsail {

class SendContactMethodVerificationResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT SendContactMethodVerificationResponse : public LightsailResponse {
    Q_OBJECT

public:
    SendContactMethodVerificationResponse(const SendContactMethodVerificationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendContactMethodVerificationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendContactMethodVerificationResponse)
    Q_DISABLE_COPY(SendContactMethodVerificationResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
