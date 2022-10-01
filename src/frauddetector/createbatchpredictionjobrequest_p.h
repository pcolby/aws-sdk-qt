// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHPREDICTIONJOBREQUEST_P_H
#define QTAWS_CREATEBATCHPREDICTIONJOBREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "createbatchpredictionjobrequest.h"

namespace QtAws {
namespace FraudDetector {

class CreateBatchPredictionJobRequest;

class CreateBatchPredictionJobRequestPrivate : public FraudDetectorRequestPrivate {

public:
    CreateBatchPredictionJobRequestPrivate(const FraudDetectorRequest::Action action,
                                   CreateBatchPredictionJobRequest * const q);
    CreateBatchPredictionJobRequestPrivate(const CreateBatchPredictionJobRequestPrivate &other,
                                   CreateBatchPredictionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBatchPredictionJobRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
