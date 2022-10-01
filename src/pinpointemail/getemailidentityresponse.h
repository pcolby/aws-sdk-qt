// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILIDENTITYRESPONSE_H
#define QTAWS_GETEMAILIDENTITYRESPONSE_H

#include "pinpointemailresponse.h"
#include "getemailidentityrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetEmailIdentityResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetEmailIdentityResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    GetEmailIdentityResponse(const GetEmailIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEmailIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEmailIdentityResponse)
    Q_DISABLE_COPY(GetEmailIdentityResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
