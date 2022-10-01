// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTORENTITYREQUEST_P_H
#define QTAWS_DESCRIBECONNECTORENTITYREQUEST_P_H

#include "appflowrequest_p.h"
#include "describeconnectorentityrequest.h"

namespace QtAws {
namespace Appflow {

class DescribeConnectorEntityRequest;

class DescribeConnectorEntityRequestPrivate : public AppflowRequestPrivate {

public:
    DescribeConnectorEntityRequestPrivate(const AppflowRequest::Action action,
                                   DescribeConnectorEntityRequest * const q);
    DescribeConnectorEntityRequestPrivate(const DescribeConnectorEntityRequestPrivate &other,
                                   DescribeConnectorEntityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConnectorEntityRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
