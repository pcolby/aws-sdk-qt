// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVALUATIONREQUEST_P_H
#define QTAWS_DELETEEVALUATIONREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "deleteevaluationrequest.h"

namespace QtAws {
namespace MachineLearning {

class DeleteEvaluationRequest;

class DeleteEvaluationRequestPrivate : public MachineLearningRequestPrivate {

public:
    DeleteEvaluationRequestPrivate(const MachineLearningRequest::Action action,
                                   DeleteEvaluationRequest * const q);
    DeleteEvaluationRequestPrivate(const DeleteEvaluationRequestPrivate &other,
                                   DeleteEvaluationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEvaluationRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
