// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTORSREQUEST_P_H
#define QTAWS_DESCRIBECONNECTORSREQUEST_P_H

#include "appflowrequest_p.h"
#include "describeconnectorsrequest.h"

namespace QtAws {
namespace Appflow {

class DescribeConnectorsRequest;

class DescribeConnectorsRequestPrivate : public AppflowRequestPrivate {

public:
    DescribeConnectorsRequestPrivate(const AppflowRequest::Action action,
                                   DescribeConnectorsRequest * const q);
    DescribeConnectorsRequestPrivate(const DescribeConnectorsRequestPrivate &other,
                                   DescribeConnectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConnectorsRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
