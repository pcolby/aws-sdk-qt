// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCCONNECTORREQUEST_P_H
#define QTAWS_DESCRIBEVPCCONNECTORREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "describevpcconnectorrequest.h"

namespace QtAws {
namespace AppRunner {

class DescribeVpcConnectorRequest;

class DescribeVpcConnectorRequestPrivate : public AppRunnerRequestPrivate {

public:
    DescribeVpcConnectorRequestPrivate(const AppRunnerRequest::Action action,
                                   DescribeVpcConnectorRequest * const q);
    DescribeVpcConnectorRequestPrivate(const DescribeVpcConnectorRequestPrivate &other,
                                   DescribeVpcConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVpcConnectorRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
