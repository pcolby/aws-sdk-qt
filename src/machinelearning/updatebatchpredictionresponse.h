// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBATCHPREDICTIONRESPONSE_H
#define QTAWS_UPDATEBATCHPREDICTIONRESPONSE_H

#include "machinelearningresponse.h"
#include "updatebatchpredictionrequest.h"

namespace QtAws {
namespace MachineLearning {

class UpdateBatchPredictionResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT UpdateBatchPredictionResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    UpdateBatchPredictionResponse(const UpdateBatchPredictionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBatchPredictionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBatchPredictionResponse)
    Q_DISABLE_COPY(UpdateBatchPredictionResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
