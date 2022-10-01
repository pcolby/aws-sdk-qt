// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBATCHPREDICTIONJOBREQUEST_P_H
#define QTAWS_DELETEBATCHPREDICTIONJOBREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "deletebatchpredictionjobrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteBatchPredictionJobRequest;

class DeleteBatchPredictionJobRequestPrivate : public FraudDetectorRequestPrivate {

public:
    DeleteBatchPredictionJobRequestPrivate(const FraudDetectorRequest::Action action,
                                   DeleteBatchPredictionJobRequest * const q);
    DeleteBatchPredictionJobRequestPrivate(const DeleteBatchPredictionJobRequestPrivate &other,
                                   DeleteBatchPredictionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBatchPredictionJobRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
