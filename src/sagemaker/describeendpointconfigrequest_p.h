// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTCONFIGREQUEST_P_H
#define QTAWS_DESCRIBEENDPOINTCONFIGREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeendpointconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeEndpointConfigRequest;

class DescribeEndpointConfigRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeEndpointConfigRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeEndpointConfigRequest * const q);
    DescribeEndpointConfigRequestPrivate(const DescribeEndpointConfigRequestPrivate &other,
                                   DescribeEndpointConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
