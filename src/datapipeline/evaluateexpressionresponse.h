// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATEEXPRESSIONRESPONSE_H
#define QTAWS_EVALUATEEXPRESSIONRESPONSE_H

#include "datapipelineresponse.h"
#include "evaluateexpressionrequest.h"

namespace QtAws {
namespace DataPipeline {

class EvaluateExpressionResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT EvaluateExpressionResponse : public DataPipelineResponse {
    Q_OBJECT

public:
    EvaluateExpressionResponse(const EvaluateExpressionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EvaluateExpressionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EvaluateExpressionResponse)
    Q_DISABLE_COPY(EvaluateExpressionResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
