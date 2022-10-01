// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGENTSREQUEST_P_H
#define QTAWS_DESCRIBEAGENTSREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "describeagentsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeAgentsRequest;

class DescribeAgentsRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    DescribeAgentsRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   DescribeAgentsRequest * const q);
    DescribeAgentsRequestPrivate(const DescribeAgentsRequestPrivate &other,
                                   DescribeAgentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAgentsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
