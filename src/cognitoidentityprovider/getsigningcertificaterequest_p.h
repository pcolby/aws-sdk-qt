// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIGNINGCERTIFICATEREQUEST_P_H
#define QTAWS_GETSIGNINGCERTIFICATEREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "getsigningcertificaterequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetSigningCertificateRequest;

class GetSigningCertificateRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    GetSigningCertificateRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   GetSigningCertificateRequest * const q);
    GetSigningCertificateRequestPrivate(const GetSigningCertificateRequestPrivate &other,
                                   GetSigningCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSigningCertificateRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
