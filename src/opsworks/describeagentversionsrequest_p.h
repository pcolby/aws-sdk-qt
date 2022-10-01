// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGENTVERSIONSREQUEST_P_H
#define QTAWS_DESCRIBEAGENTVERSIONSREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describeagentversionsrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeAgentVersionsRequest;

class DescribeAgentVersionsRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeAgentVersionsRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeAgentVersionsRequest * const q);
    DescribeAgentVersionsRequestPrivate(const DescribeAgentVersionsRequestPrivate &other,
                                   DescribeAgentVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAgentVersionsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
