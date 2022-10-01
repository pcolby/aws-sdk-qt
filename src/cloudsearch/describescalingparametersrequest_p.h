// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBESCALINGPARAMETERSREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "describescalingparametersrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeScalingParametersRequest;

class DescribeScalingParametersRequestPrivate : public CloudSearchRequestPrivate {

public:
    DescribeScalingParametersRequestPrivate(const CloudSearchRequest::Action action,
                                   DescribeScalingParametersRequest * const q);
    DescribeScalingParametersRequestPrivate(const DescribeScalingParametersRequestPrivate &other,
                                   DescribeScalingParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeScalingParametersRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
