// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVALUATIONREQUEST_P_H
#define QTAWS_UPDATEEVALUATIONREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "updateevaluationrequest.h"

namespace QtAws {
namespace MachineLearning {

class UpdateEvaluationRequest;

class UpdateEvaluationRequestPrivate : public MachineLearningRequestPrivate {

public:
    UpdateEvaluationRequestPrivate(const MachineLearningRequest::Action action,
                                   UpdateEvaluationRequest * const q);
    UpdateEvaluationRequestPrivate(const UpdateEvaluationRequestPrivate &other,
                                   UpdateEvaluationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEvaluationRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
