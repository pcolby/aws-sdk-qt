// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBATCHPREDICTIONJOBSRESPONSE_P_H
#define QTAWS_GETBATCHPREDICTIONJOBSRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetBatchPredictionJobsResponse;

class GetBatchPredictionJobsResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetBatchPredictionJobsResponsePrivate(GetBatchPredictionJobsResponse * const q);

    void parseGetBatchPredictionJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBatchPredictionJobsResponse)
    Q_DISABLE_COPY(GetBatchPredictionJobsResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
