// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEIDENTITYPROVIDERCONFIGREQUEST_H
#define QTAWS_DISASSOCIATEIDENTITYPROVIDERCONFIGREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class DisassociateIdentityProviderConfigRequestPrivate;

class QTAWSEKS_EXPORT DisassociateIdentityProviderConfigRequest : public EksRequest {

public:
    DisassociateIdentityProviderConfigRequest(const DisassociateIdentityProviderConfigRequest &other);
    DisassociateIdentityProviderConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateIdentityProviderConfigRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
