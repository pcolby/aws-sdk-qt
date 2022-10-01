// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTRANSITGATEWAYMULTICASTGROUPMEMBERSREQUEST_H
#define QTAWS_DEREGISTERTRANSITGATEWAYMULTICASTGROUPMEMBERSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeregisterTransitGatewayMulticastGroupMembersRequestPrivate;

class QTAWSEC2_EXPORT DeregisterTransitGatewayMulticastGroupMembersRequest : public Ec2Request {

public:
    DeregisterTransitGatewayMulticastGroupMembersRequest(const DeregisterTransitGatewayMulticastGroupMembersRequest &other);
    DeregisterTransitGatewayMulticastGroupMembersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterTransitGatewayMulticastGroupMembersRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
