// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWDEFINITIONRESPONSE_H
#define QTAWS_DESCRIBEFLOWDEFINITIONRESPONSE_H

#include "sagemakerresponse.h"
#include "describeflowdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeFlowDefinitionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeFlowDefinitionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeFlowDefinitionResponse(const DescribeFlowDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFlowDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFlowDefinitionResponse)
    Q_DISABLE_COPY(DescribeFlowDefinitionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
