// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBATCHPREDICTIONSRESPONSE_H
#define QTAWS_DESCRIBEBATCHPREDICTIONSRESPONSE_H

#include "machinelearningresponse.h"
#include "describebatchpredictionsrequest.h"

namespace QtAws {
namespace MachineLearning {

class DescribeBatchPredictionsResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT DescribeBatchPredictionsResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    DescribeBatchPredictionsResponse(const DescribeBatchPredictionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBatchPredictionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBatchPredictionsResponse)
    Q_DISABLE_COPY(DescribeBatchPredictionsResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
