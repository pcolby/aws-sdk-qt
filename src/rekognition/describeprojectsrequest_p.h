// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTSREQUEST_P_H
#define QTAWS_DESCRIBEPROJECTSREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "describeprojectsrequest.h"

namespace QtAws {
namespace Rekognition {

class DescribeProjectsRequest;

class DescribeProjectsRequestPrivate : public RekognitionRequestPrivate {

public:
    DescribeProjectsRequestPrivate(const RekognitionRequest::Action action,
                                   DescribeProjectsRequest * const q);
    DescribeProjectsRequestPrivate(const DescribeProjectsRequestPrivate &other,
                                   DescribeProjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProjectsRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
