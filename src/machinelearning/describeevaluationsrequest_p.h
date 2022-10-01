// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVALUATIONSREQUEST_P_H
#define QTAWS_DESCRIBEEVALUATIONSREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "describeevaluationsrequest.h"

namespace QtAws {
namespace MachineLearning {

class DescribeEvaluationsRequest;

class DescribeEvaluationsRequestPrivate : public MachineLearningRequestPrivate {

public:
    DescribeEvaluationsRequestPrivate(const MachineLearningRequest::Action action,
                                   DescribeEvaluationsRequest * const q);
    DescribeEvaluationsRequestPrivate(const DescribeEvaluationsRequestPrivate &other,
                                   DescribeEvaluationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEvaluationsRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
