// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBATCHPREDICTIONREQUEST_P_H
#define QTAWS_DELETEBATCHPREDICTIONREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "deletebatchpredictionrequest.h"

namespace QtAws {
namespace MachineLearning {

class DeleteBatchPredictionRequest;

class DeleteBatchPredictionRequestPrivate : public MachineLearningRequestPrivate {

public:
    DeleteBatchPredictionRequestPrivate(const MachineLearningRequest::Action action,
                                   DeleteBatchPredictionRequest * const q);
    DeleteBatchPredictionRequestPrivate(const DeleteBatchPredictionRequestPrivate &other,
                                   DeleteBatchPredictionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBatchPredictionRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
