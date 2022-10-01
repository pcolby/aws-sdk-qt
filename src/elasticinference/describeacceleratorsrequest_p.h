// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATORSREQUEST_P_H
#define QTAWS_DESCRIBEACCELERATORSREQUEST_P_H

#include "elasticinferencerequest_p.h"
#include "describeacceleratorsrequest.h"

namespace QtAws {
namespace ElasticInference {

class DescribeAcceleratorsRequest;

class DescribeAcceleratorsRequestPrivate : public ElasticInferenceRequestPrivate {

public:
    DescribeAcceleratorsRequestPrivate(const ElasticInferenceRequest::Action action,
                                   DescribeAcceleratorsRequest * const q);
    DescribeAcceleratorsRequestPrivate(const DescribeAcceleratorsRequestPrivate &other,
                                   DescribeAcceleratorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAcceleratorsRequest)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
