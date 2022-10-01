// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTRANSITGATEWAYMULTICASTGROUPSREQUEST_H
#define QTAWS_SEARCHTRANSITGATEWAYMULTICASTGROUPSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class SearchTransitGatewayMulticastGroupsRequestPrivate;

class QTAWSEC2_EXPORT SearchTransitGatewayMulticastGroupsRequest : public Ec2Request {

public:
    SearchTransitGatewayMulticastGroupsRequest(const SearchTransitGatewayMulticastGroupsRequest &other);
    SearchTransitGatewayMulticastGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchTransitGatewayMulticastGroupsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
