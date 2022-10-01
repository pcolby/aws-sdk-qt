// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMLMODELSRESPONSE_P_H
#define QTAWS_DESCRIBEMLMODELSRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class DescribeMLModelsResponse;

class DescribeMLModelsResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit DescribeMLModelsResponsePrivate(DescribeMLModelsResponse * const q);

    void parseDescribeMLModelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMLModelsResponse)
    Q_DISABLE_COPY(DescribeMLModelsResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
