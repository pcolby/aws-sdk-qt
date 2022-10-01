// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEIDENTITYPROVIDERCONFIGREQUEST_P_H
#define QTAWS_ASSOCIATEIDENTITYPROVIDERCONFIGREQUEST_P_H

#include "eksrequest_p.h"
#include "associateidentityproviderconfigrequest.h"

namespace QtAws {
namespace Eks {

class AssociateIdentityProviderConfigRequest;

class AssociateIdentityProviderConfigRequestPrivate : public EksRequestPrivate {

public:
    AssociateIdentityProviderConfigRequestPrivate(const EksRequest::Action action,
                                   AssociateIdentityProviderConfigRequest * const q);
    AssociateIdentityProviderConfigRequestPrivate(const AssociateIdentityProviderConfigRequestPrivate &other,
                                   AssociateIdentityProviderConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateIdentityProviderConfigRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
