// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBNETCHANGEPROTECTIONREQUEST_H
#define QTAWS_UPDATESUBNETCHANGEPROTECTIONREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateSubnetChangeProtectionRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateSubnetChangeProtectionRequest : public NetworkFirewallRequest {

public:
    UpdateSubnetChangeProtectionRequest(const UpdateSubnetChangeProtectionRequest &other);
    UpdateSubnetChangeProtectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSubnetChangeProtectionRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
