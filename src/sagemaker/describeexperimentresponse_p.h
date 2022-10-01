// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPERIMENTRESPONSE_P_H
#define QTAWS_DESCRIBEEXPERIMENTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeExperimentResponse;

class DescribeExperimentResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeExperimentResponsePrivate(DescribeExperimentResponse * const q);

    void parseDescribeExperimentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeExperimentResponse)
    Q_DISABLE_COPY(DescribeExperimentResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
