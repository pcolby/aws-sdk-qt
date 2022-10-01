// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVALUATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEEVALUATIONSRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class DescribeEvaluationsResponse;

class DescribeEvaluationsResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit DescribeEvaluationsResponsePrivate(DescribeEvaluationsResponse * const q);

    void parseDescribeEvaluationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEvaluationsResponse)
    Q_DISABLE_COPY(DescribeEvaluationsResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
