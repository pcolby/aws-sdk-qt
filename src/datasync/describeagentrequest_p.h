// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGENTREQUEST_P_H
#define QTAWS_DESCRIBEAGENTREQUEST_P_H

#include "datasyncrequest_p.h"
#include "describeagentrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeAgentRequest;

class DescribeAgentRequestPrivate : public DataSyncRequestPrivate {

public:
    DescribeAgentRequestPrivate(const DataSyncRequest::Action action,
                                   DescribeAgentRequest * const q);
    DescribeAgentRequestPrivate(const DescribeAgentRequestPrivate &other,
                                   DescribeAgentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAgentRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
