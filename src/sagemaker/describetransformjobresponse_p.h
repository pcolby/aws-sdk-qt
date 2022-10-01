// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSFORMJOBRESPONSE_P_H
#define QTAWS_DESCRIBETRANSFORMJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeTransformJobResponse;

class DescribeTransformJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeTransformJobResponsePrivate(DescribeTransformJobResponse * const q);

    void parseDescribeTransformJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTransformJobResponse)
    Q_DISABLE_COPY(DescribeTransformJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
