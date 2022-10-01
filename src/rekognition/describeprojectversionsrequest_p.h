// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTVERSIONSREQUEST_P_H
#define QTAWS_DESCRIBEPROJECTVERSIONSREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "describeprojectversionsrequest.h"

namespace QtAws {
namespace Rekognition {

class DescribeProjectVersionsRequest;

class DescribeProjectVersionsRequestPrivate : public RekognitionRequestPrivate {

public:
    DescribeProjectVersionsRequestPrivate(const RekognitionRequest::Action action,
                                   DescribeProjectVersionsRequest * const q);
    DescribeProjectVersionsRequestPrivate(const DescribeProjectVersionsRequestPrivate &other,
                                   DescribeProjectVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProjectVersionsRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
