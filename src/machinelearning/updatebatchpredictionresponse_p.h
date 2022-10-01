// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBATCHPREDICTIONRESPONSE_P_H
#define QTAWS_UPDATEBATCHPREDICTIONRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class UpdateBatchPredictionResponse;

class UpdateBatchPredictionResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit UpdateBatchPredictionResponsePrivate(UpdateBatchPredictionResponse * const q);

    void parseUpdateBatchPredictionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBatchPredictionResponse)
    Q_DISABLE_COPY(UpdateBatchPredictionResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
