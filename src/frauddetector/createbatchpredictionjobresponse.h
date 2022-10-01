// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHPREDICTIONJOBRESPONSE_H
#define QTAWS_CREATEBATCHPREDICTIONJOBRESPONSE_H

#include "frauddetectorresponse.h"
#include "createbatchpredictionjobrequest.h"

namespace QtAws {
namespace FraudDetector {

class CreateBatchPredictionJobResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT CreateBatchPredictionJobResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    CreateBatchPredictionJobResponse(const CreateBatchPredictionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBatchPredictionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBatchPredictionJobResponse)
    Q_DISABLE_COPY(CreateBatchPredictionJobResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
