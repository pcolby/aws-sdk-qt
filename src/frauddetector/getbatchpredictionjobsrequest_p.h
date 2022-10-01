// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBATCHPREDICTIONJOBSREQUEST_P_H
#define QTAWS_GETBATCHPREDICTIONJOBSREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "getbatchpredictionjobsrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetBatchPredictionJobsRequest;

class GetBatchPredictionJobsRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetBatchPredictionJobsRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetBatchPredictionJobsRequest * const q);
    GetBatchPredictionJobsRequestPrivate(const GetBatchPredictionJobsRequestPrivate &other,
                                   GetBatchPredictionJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBatchPredictionJobsRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
