// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEDGEPACKAGINGJOBRESPONSE_P_H
#define QTAWS_DESCRIBEEDGEPACKAGINGJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeEdgePackagingJobResponse;

class DescribeEdgePackagingJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeEdgePackagingJobResponsePrivate(DescribeEdgePackagingJobResponse * const q);

    void parseDescribeEdgePackagingJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEdgePackagingJobResponse)
    Q_DISABLE_COPY(DescribeEdgePackagingJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
