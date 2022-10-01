// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCLIENTREQUEST_H
#define QTAWS_REGISTERCLIENTREQUEST_H

#include "ssooidcrequest.h"

namespace QtAws {
namespace SsoOidc {

class RegisterClientRequestPrivate;

class QTAWSSSOOIDC_EXPORT RegisterClientRequest : public SsoOidcRequest {

public:
    RegisterClientRequest(const RegisterClientRequest &other);
    RegisterClientRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterClientRequest)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
