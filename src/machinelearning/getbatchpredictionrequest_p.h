// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBATCHPREDICTIONREQUEST_P_H
#define QTAWS_GETBATCHPREDICTIONREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "getbatchpredictionrequest.h"

namespace QtAws {
namespace MachineLearning {

class GetBatchPredictionRequest;

class GetBatchPredictionRequestPrivate : public MachineLearningRequestPrivate {

public:
    GetBatchPredictionRequestPrivate(const MachineLearningRequest::Action action,
                                   GetBatchPredictionRequest * const q);
    GetBatchPredictionRequestPrivate(const GetBatchPredictionRequestPrivate &other,
                                   GetBatchPredictionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBatchPredictionRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
