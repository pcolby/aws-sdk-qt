// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEIDENTITYPROVIDERCONFIGREQUEST_H
#define QTAWS_ASSOCIATEIDENTITYPROVIDERCONFIGREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class AssociateIdentityProviderConfigRequestPrivate;

class QTAWSEKS_EXPORT AssociateIdentityProviderConfigRequest : public EksRequest {

public:
    AssociateIdentityProviderConfigRequest(const AssociateIdentityProviderConfigRequest &other);
    AssociateIdentityProviderConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateIdentityProviderConfigRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
