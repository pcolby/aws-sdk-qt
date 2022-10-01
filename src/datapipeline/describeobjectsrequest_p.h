// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOBJECTSREQUEST_P_H
#define QTAWS_DESCRIBEOBJECTSREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "describeobjectsrequest.h"

namespace QtAws {
namespace DataPipeline {

class DescribeObjectsRequest;

class DescribeObjectsRequestPrivate : public DataPipelineRequestPrivate {

public:
    DescribeObjectsRequestPrivate(const DataPipelineRequest::Action action,
                                   DescribeObjectsRequest * const q);
    DescribeObjectsRequestPrivate(const DescribeObjectsRequestPrivate &other,
                                   DescribeObjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeObjectsRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
