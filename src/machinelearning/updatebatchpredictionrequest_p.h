// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBATCHPREDICTIONREQUEST_P_H
#define QTAWS_UPDATEBATCHPREDICTIONREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "updatebatchpredictionrequest.h"

namespace QtAws {
namespace MachineLearning {

class UpdateBatchPredictionRequest;

class UpdateBatchPredictionRequestPrivate : public MachineLearningRequestPrivate {

public:
    UpdateBatchPredictionRequestPrivate(const MachineLearningRequest::Action action,
                                   UpdateBatchPredictionRequest * const q);
    UpdateBatchPredictionRequestPrivate(const UpdateBatchPredictionRequestPrivate &other,
                                   UpdateBatchPredictionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBatchPredictionRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
