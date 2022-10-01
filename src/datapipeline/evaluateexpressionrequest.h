// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATEEXPRESSIONREQUEST_H
#define QTAWS_EVALUATEEXPRESSIONREQUEST_H

#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class EvaluateExpressionRequestPrivate;

class QTAWSDATAPIPELINE_EXPORT EvaluateExpressionRequest : public DataPipelineRequest {

public:
    EvaluateExpressionRequest(const EvaluateExpressionRequest &other);
    EvaluateExpressionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EvaluateExpressionRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
