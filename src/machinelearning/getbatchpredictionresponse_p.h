// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBATCHPREDICTIONRESPONSE_P_H
#define QTAWS_GETBATCHPREDICTIONRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class GetBatchPredictionResponse;

class GetBatchPredictionResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit GetBatchPredictionResponsePrivate(GetBatchPredictionResponse * const q);

    void parseGetBatchPredictionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBatchPredictionResponse)
    Q_DISABLE_COPY(GetBatchPredictionResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
