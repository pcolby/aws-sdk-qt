// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBATCHPREDICTIONSREQUEST_P_H
#define QTAWS_DESCRIBEBATCHPREDICTIONSREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "describebatchpredictionsrequest.h"

namespace QtAws {
namespace MachineLearning {

class DescribeBatchPredictionsRequest;

class DescribeBatchPredictionsRequestPrivate : public MachineLearningRequestPrivate {

public:
    DescribeBatchPredictionsRequestPrivate(const MachineLearningRequest::Action action,
                                   DescribeBatchPredictionsRequest * const q);
    DescribeBatchPredictionsRequestPrivate(const DescribeBatchPredictionsRequestPrivate &other,
                                   DescribeBatchPredictionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBatchPredictionsRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
