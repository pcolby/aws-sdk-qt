// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIGNINGCERTIFICATEREQUEST_H
#define QTAWS_GETSIGNINGCERTIFICATEREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetSigningCertificateRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT GetSigningCertificateRequest : public CognitoIdentityProviderRequest {

public:
    GetSigningCertificateRequest(const GetSigningCertificateRequest &other);
    GetSigningCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSigningCertificateRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
