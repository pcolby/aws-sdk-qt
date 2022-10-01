// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVALUATIONREQUEST_P_H
#define QTAWS_CREATEEVALUATIONREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "createevaluationrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateEvaluationRequest;

class CreateEvaluationRequestPrivate : public MachineLearningRequestPrivate {

public:
    CreateEvaluationRequestPrivate(const MachineLearningRequest::Action action,
                                   CreateEvaluationRequest * const q);
    CreateEvaluationRequestPrivate(const CreateEvaluationRequestPrivate &other,
                                   CreateEvaluationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEvaluationRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
