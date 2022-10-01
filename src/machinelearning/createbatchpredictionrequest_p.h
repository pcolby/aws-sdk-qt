// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHPREDICTIONREQUEST_P_H
#define QTAWS_CREATEBATCHPREDICTIONREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "createbatchpredictionrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateBatchPredictionRequest;

class CreateBatchPredictionRequestPrivate : public MachineLearningRequestPrivate {

public:
    CreateBatchPredictionRequestPrivate(const MachineLearningRequest::Action action,
                                   CreateBatchPredictionRequest * const q);
    CreateBatchPredictionRequestPrivate(const CreateBatchPredictionRequestPrivate &other,
                                   CreateBatchPredictionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBatchPredictionRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
