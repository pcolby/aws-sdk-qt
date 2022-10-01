// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBATCHPREDICTIONJOBSRESPONSE_H
#define QTAWS_GETBATCHPREDICTIONJOBSRESPONSE_H

#include "frauddetectorresponse.h"
#include "getbatchpredictionjobsrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetBatchPredictionJobsResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetBatchPredictionJobsResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetBatchPredictionJobsResponse(const GetBatchPredictionJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBatchPredictionJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBatchPredictionJobsResponse)
    Q_DISABLE_COPY(GetBatchPredictionJobsResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
