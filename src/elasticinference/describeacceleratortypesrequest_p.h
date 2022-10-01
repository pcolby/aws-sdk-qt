// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATORTYPESREQUEST_P_H
#define QTAWS_DESCRIBEACCELERATORTYPESREQUEST_P_H

#include "elasticinferencerequest_p.h"
#include "describeacceleratortypesrequest.h"

namespace QtAws {
namespace ElasticInference {

class DescribeAcceleratorTypesRequest;

class DescribeAcceleratorTypesRequestPrivate : public ElasticInferenceRequestPrivate {

public:
    DescribeAcceleratorTypesRequestPrivate(const ElasticInferenceRequest::Action action,
                                   DescribeAcceleratorTypesRequest * const q);
    DescribeAcceleratorTypesRequestPrivate(const DescribeAcceleratorTypesRequestPrivate &other,
                                   DescribeAcceleratorTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAcceleratorTypesRequest)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
