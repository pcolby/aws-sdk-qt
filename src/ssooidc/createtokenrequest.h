// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOKENREQUEST_H
#define QTAWS_CREATETOKENREQUEST_H

#include "ssooidcrequest.h"

namespace QtAws {
namespace SsoOidc {

class CreateTokenRequestPrivate;

class QTAWSSSOOIDC_EXPORT CreateTokenRequest : public SsoOidcRequest {

public:
    CreateTokenRequest(const CreateTokenRequest &other);
    CreateTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTokenRequest)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
