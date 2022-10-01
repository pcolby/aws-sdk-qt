// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBATCHPREDICTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEBATCHPREDICTIONSRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class DescribeBatchPredictionsResponse;

class DescribeBatchPredictionsResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit DescribeBatchPredictionsResponsePrivate(DescribeBatchPredictionsResponse * const q);

    void parseDescribeBatchPredictionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBatchPredictionsResponse)
    Q_DISABLE_COPY(DescribeBatchPredictionsResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
