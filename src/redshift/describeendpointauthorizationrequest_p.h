// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTAUTHORIZATIONREQUEST_P_H
#define QTAWS_DESCRIBEENDPOINTAUTHORIZATIONREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeendpointauthorizationrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeEndpointAuthorizationRequest;

class DescribeEndpointAuthorizationRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeEndpointAuthorizationRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeEndpointAuthorizationRequest * const q);
    DescribeEndpointAuthorizationRequestPrivate(const DescribeEndpointAuthorizationRequestPrivate &other,
                                   DescribeEndpointAuthorizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointAuthorizationRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
