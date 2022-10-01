// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETHIRDPARTYFIREWALLREQUEST_H
#define QTAWS_ASSOCIATETHIRDPARTYFIREWALLREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class AssociateThirdPartyFirewallRequestPrivate;

class QTAWSFMS_EXPORT AssociateThirdPartyFirewallRequest : public FmsRequest {

public:
    AssociateThirdPartyFirewallRequest(const AssociateThirdPartyFirewallRequest &other);
    AssociateThirdPartyFirewallRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateThirdPartyFirewallRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
