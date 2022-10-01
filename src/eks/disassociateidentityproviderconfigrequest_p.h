// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEIDENTITYPROVIDERCONFIGREQUEST_P_H
#define QTAWS_DISASSOCIATEIDENTITYPROVIDERCONFIGREQUEST_P_H

#include "eksrequest_p.h"
#include "disassociateidentityproviderconfigrequest.h"

namespace QtAws {
namespace Eks {

class DisassociateIdentityProviderConfigRequest;

class DisassociateIdentityProviderConfigRequestPrivate : public EksRequestPrivate {

public:
    DisassociateIdentityProviderConfigRequestPrivate(const EksRequest::Action action,
                                   DisassociateIdentityProviderConfigRequest * const q);
    DisassociateIdentityProviderConfigRequestPrivate(const DisassociateIdentityProviderConfigRequestPrivate &other,
                                   DisassociateIdentityProviderConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateIdentityProviderConfigRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
