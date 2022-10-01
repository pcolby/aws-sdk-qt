// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATOROFFERINGSREQUEST_P_H
#define QTAWS_DESCRIBEACCELERATOROFFERINGSREQUEST_P_H

#include "elasticinferencerequest_p.h"
#include "describeacceleratorofferingsrequest.h"

namespace QtAws {
namespace ElasticInference {

class DescribeAcceleratorOfferingsRequest;

class DescribeAcceleratorOfferingsRequestPrivate : public ElasticInferenceRequestPrivate {

public:
    DescribeAcceleratorOfferingsRequestPrivate(const ElasticInferenceRequest::Action action,
                                   DescribeAcceleratorOfferingsRequest * const q);
    DescribeAcceleratorOfferingsRequestPrivate(const DescribeAcceleratorOfferingsRequestPrivate &other,
                                   DescribeAcceleratorOfferingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAcceleratorOfferingsRequest)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
