// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIGNINGCERTIFICATERESPONSE_P_H
#define QTAWS_GETSIGNINGCERTIFICATERESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetSigningCertificateResponse;

class GetSigningCertificateResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit GetSigningCertificateResponsePrivate(GetSigningCertificateResponse * const q);

    void parseGetSigningCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSigningCertificateResponse)
    Q_DISABLE_COPY(GetSigningCertificateResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
