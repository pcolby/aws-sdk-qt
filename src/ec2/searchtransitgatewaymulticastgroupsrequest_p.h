// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTRANSITGATEWAYMULTICASTGROUPSREQUEST_P_H
#define QTAWS_SEARCHTRANSITGATEWAYMULTICASTGROUPSREQUEST_P_H

#include "ec2request_p.h"
#include "searchtransitgatewaymulticastgroupsrequest.h"

namespace QtAws {
namespace Ec2 {

class SearchTransitGatewayMulticastGroupsRequest;

class SearchTransitGatewayMulticastGroupsRequestPrivate : public Ec2RequestPrivate {

public:
    SearchTransitGatewayMulticastGroupsRequestPrivate(const Ec2Request::Action action,
                                   SearchTransitGatewayMulticastGroupsRequest * const q);
    SearchTransitGatewayMulticastGroupsRequestPrivate(const SearchTransitGatewayMulticastGroupsRequestPrivate &other,
                                   SearchTransitGatewayMulticastGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchTransitGatewayMulticastGroupsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
