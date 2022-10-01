// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAININGJOBRESPONSE_P_H
#define QTAWS_DESCRIBETRAININGJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeTrainingJobResponse;

class DescribeTrainingJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeTrainingJobResponsePrivate(DescribeTrainingJobResponse * const q);

    void parseDescribeTrainingJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTrainingJobResponse)
    Q_DISABLE_COPY(DescribeTrainingJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
