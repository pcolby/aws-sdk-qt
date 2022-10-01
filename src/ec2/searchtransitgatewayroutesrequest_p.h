// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTRANSITGATEWAYROUTESREQUEST_P_H
#define QTAWS_SEARCHTRANSITGATEWAYROUTESREQUEST_P_H

#include "ec2request_p.h"
#include "searchtransitgatewayroutesrequest.h"

namespace QtAws {
namespace Ec2 {

class SearchTransitGatewayRoutesRequest;

class SearchTransitGatewayRoutesRequestPrivate : public Ec2RequestPrivate {

public:
    SearchTransitGatewayRoutesRequestPrivate(const Ec2Request::Action action,
                                   SearchTransitGatewayRoutesRequest * const q);
    SearchTransitGatewayRoutesRequestPrivate(const SearchTransitGatewayRoutesRequestPrivate &other,
                                   SearchTransitGatewayRoutesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchTransitGatewayRoutesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
