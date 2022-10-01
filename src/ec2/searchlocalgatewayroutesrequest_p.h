// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHLOCALGATEWAYROUTESREQUEST_P_H
#define QTAWS_SEARCHLOCALGATEWAYROUTESREQUEST_P_H

#include "ec2request_p.h"
#include "searchlocalgatewayroutesrequest.h"

namespace QtAws {
namespace Ec2 {

class SearchLocalGatewayRoutesRequest;

class SearchLocalGatewayRoutesRequestPrivate : public Ec2RequestPrivate {

public:
    SearchLocalGatewayRoutesRequestPrivate(const Ec2Request::Action action,
                                   SearchLocalGatewayRoutesRequest * const q);
    SearchLocalGatewayRoutesRequestPrivate(const SearchLocalGatewayRoutesRequestPrivate &other,
                                   SearchLocalGatewayRoutesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchLocalGatewayRoutesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
