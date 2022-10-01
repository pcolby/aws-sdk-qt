// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBATCHPREDICTIONRESPONSE_P_H
#define QTAWS_DELETEBATCHPREDICTIONRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class DeleteBatchPredictionResponse;

class DeleteBatchPredictionResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit DeleteBatchPredictionResponsePrivate(DeleteBatchPredictionResponse * const q);

    void parseDeleteBatchPredictionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBatchPredictionResponse)
    Q_DISABLE_COPY(DeleteBatchPredictionResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
