// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIGNINGCERTIFICATERESPONSE_H
#define QTAWS_GETSIGNINGCERTIFICATERESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "getsigningcertificaterequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetSigningCertificateResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT GetSigningCertificateResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    GetSigningCertificateResponse(const GetSigningCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSigningCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSigningCertificateResponse)
    Q_DISABLE_COPY(GetSigningCertificateResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
