// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTACCESSREQUEST_P_H
#define QTAWS_DESCRIBEENDPOINTACCESSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeendpointaccessrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeEndpointAccessRequest;

class DescribeEndpointAccessRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeEndpointAccessRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeEndpointAccessRequest * const q);
    DescribeEndpointAccessRequestPrivate(const DescribeEndpointAccessRequestPrivate &other,
                                   DescribeEndpointAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointAccessRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
