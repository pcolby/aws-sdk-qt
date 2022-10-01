// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELBATCHPREDICTIONJOBREQUEST_P_H
#define QTAWS_CANCELBATCHPREDICTIONJOBREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "cancelbatchpredictionjobrequest.h"

namespace QtAws {
namespace FraudDetector {

class CancelBatchPredictionJobRequest;

class CancelBatchPredictionJobRequestPrivate : public FraudDetectorRequestPrivate {

public:
    CancelBatchPredictionJobRequestPrivate(const FraudDetectorRequest::Action action,
                                   CancelBatchPredictionJobRequest * const q);
    CancelBatchPredictionJobRequestPrivate(const CancelBatchPredictionJobRequestPrivate &other,
                                   CancelBatchPredictionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelBatchPredictionJobRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
