// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFEATUREMETADATAREQUEST_P_H
#define QTAWS_DESCRIBEFEATUREMETADATAREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describefeaturemetadatarequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeFeatureMetadataRequest;

class DescribeFeatureMetadataRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeFeatureMetadataRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeFeatureMetadataRequest * const q);
    DescribeFeatureMetadataRequestPrivate(const DescribeFeatureMetadataRequestPrivate &other,
                                   DescribeFeatureMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFeatureMetadataRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
