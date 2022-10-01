// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMULTIREGIONACCESSPOINTOPERATIONREQUEST_P_H
#define QTAWS_DESCRIBEMULTIREGIONACCESSPOINTOPERATIONREQUEST_P_H

#include "s3controlrequest_p.h"
#include "describemultiregionaccesspointoperationrequest.h"

namespace QtAws {
namespace S3Control {

class DescribeMultiRegionAccessPointOperationRequest;

class DescribeMultiRegionAccessPointOperationRequestPrivate : public S3ControlRequestPrivate {

public:
    DescribeMultiRegionAccessPointOperationRequestPrivate(const S3ControlRequest::Action action,
                                   DescribeMultiRegionAccessPointOperationRequest * const q);
    DescribeMultiRegionAccessPointOperationRequestPrivate(const DescribeMultiRegionAccessPointOperationRequestPrivate &other,
                                   DescribeMultiRegionAccessPointOperationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMultiRegionAccessPointOperationRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
