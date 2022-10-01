// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHPREDICTIONRESPONSE_P_H
#define QTAWS_CREATEBATCHPREDICTIONRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class CreateBatchPredictionResponse;

class CreateBatchPredictionResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit CreateBatchPredictionResponsePrivate(CreateBatchPredictionResponse * const q);

    void parseCreateBatchPredictionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBatchPredictionResponse)
    Q_DISABLE_COPY(CreateBatchPredictionResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
