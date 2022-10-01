// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATEEXPRESSIONRESPONSE_P_H
#define QTAWS_EVALUATEEXPRESSIONRESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class EvaluateExpressionResponse;

class EvaluateExpressionResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit EvaluateExpressionResponsePrivate(EvaluateExpressionResponse * const q);

    void parseEvaluateExpressionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EvaluateExpressionResponse)
    Q_DISABLE_COPY(EvaluateExpressionResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
