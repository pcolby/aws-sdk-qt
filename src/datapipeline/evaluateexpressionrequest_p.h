// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATEEXPRESSIONREQUEST_P_H
#define QTAWS_EVALUATEEXPRESSIONREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "evaluateexpressionrequest.h"

namespace QtAws {
namespace DataPipeline {

class EvaluateExpressionRequest;

class EvaluateExpressionRequestPrivate : public DataPipelineRequestPrivate {

public:
    EvaluateExpressionRequestPrivate(const DataPipelineRequest::Action action,
                                   EvaluateExpressionRequest * const q);
    EvaluateExpressionRequestPrivate(const EvaluateExpressionRequestPrivate &other,
                                   EvaluateExpressionRequest * const q);

private:
    Q_DECLARE_PUBLIC(EvaluateExpressionRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
