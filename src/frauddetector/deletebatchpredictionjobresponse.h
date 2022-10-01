// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBATCHPREDICTIONJOBRESPONSE_H
#define QTAWS_DELETEBATCHPREDICTIONJOBRESPONSE_H

#include "frauddetectorresponse.h"
#include "deletebatchpredictionjobrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteBatchPredictionJobResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteBatchPredictionJobResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    DeleteBatchPredictionJobResponse(const DeleteBatchPredictionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBatchPredictionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBatchPredictionJobResponse)
    Q_DISABLE_COPY(DeleteBatchPredictionJobResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
