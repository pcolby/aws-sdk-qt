// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHPREDICTIONRESPONSE_H
#define QTAWS_CREATEBATCHPREDICTIONRESPONSE_H

#include "machinelearningresponse.h"
#include "createbatchpredictionrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateBatchPredictionResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT CreateBatchPredictionResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    CreateBatchPredictionResponse(const CreateBatchPredictionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBatchPredictionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBatchPredictionResponse)
    Q_DISABLE_COPY(CreateBatchPredictionResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
