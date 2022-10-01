// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBATCHPREDICTIONRESPONSE_H
#define QTAWS_GETBATCHPREDICTIONRESPONSE_H

#include "machinelearningresponse.h"
#include "getbatchpredictionrequest.h"

namespace QtAws {
namespace MachineLearning {

class GetBatchPredictionResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT GetBatchPredictionResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    GetBatchPredictionResponse(const GetBatchPredictionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBatchPredictionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBatchPredictionResponse)
    Q_DISABLE_COPY(GetBatchPredictionResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
