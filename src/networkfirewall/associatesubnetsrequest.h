// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESUBNETSREQUEST_H
#define QTAWS_ASSOCIATESUBNETSREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class AssociateSubnetsRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT AssociateSubnetsRequest : public NetworkFirewallRequest {

public:
    AssociateSubnetsRequest(const AssociateSubnetsRequest &other);
    AssociateSubnetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateSubnetsRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
