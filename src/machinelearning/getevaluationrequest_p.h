// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVALUATIONREQUEST_P_H
#define QTAWS_GETEVALUATIONREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "getevaluationrequest.h"

namespace QtAws {
namespace MachineLearning {

class GetEvaluationRequest;

class GetEvaluationRequestPrivate : public MachineLearningRequestPrivate {

public:
    GetEvaluationRequestPrivate(const MachineLearningRequest::Action action,
                                   GetEvaluationRequest * const q);
    GetEvaluationRequestPrivate(const GetEvaluationRequestPrivate &other,
                                   GetEvaluationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEvaluationRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
