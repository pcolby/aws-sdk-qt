// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESUBNETSREQUEST_H
#define QTAWS_DISASSOCIATESUBNETSREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DisassociateSubnetsRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT DisassociateSubnetsRequest : public NetworkFirewallRequest {

public:
    DisassociateSubnetsRequest(const DisassociateSubnetsRequest &other);
    DisassociateSubnetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateSubnetsRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
