// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEREQUEST_P_H
#define QTAWS_DESCRIBESERVICEREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "describeservicerequest.h"

namespace QtAws {
namespace AppRunner {

class DescribeServiceRequest;

class DescribeServiceRequestPrivate : public AppRunnerRequestPrivate {

public:
    DescribeServiceRequestPrivate(const AppRunnerRequest::Action action,
                                   DescribeServiceRequest * const q);
    DescribeServiceRequestPrivate(const DescribeServiceRequestPrivate &other,
                                   DescribeServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeServiceRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
