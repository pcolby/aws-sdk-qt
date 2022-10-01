// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTORREQUEST_P_H
#define QTAWS_DESCRIBECONNECTORREQUEST_P_H

#include "appflowrequest_p.h"
#include "describeconnectorrequest.h"

namespace QtAws {
namespace Appflow {

class DescribeConnectorRequest;

class DescribeConnectorRequestPrivate : public AppflowRequestPrivate {

public:
    DescribeConnectorRequestPrivate(const AppflowRequest::Action action,
                                   DescribeConnectorRequest * const q);
    DescribeConnectorRequestPrivate(const DescribeConnectorRequestPrivate &other,
                                   DescribeConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConnectorRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
