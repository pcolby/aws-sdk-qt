// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELBIASJOBDEFINITIONRESPONSE_H
#define QTAWS_DESCRIBEMODELBIASJOBDEFINITIONRESPONSE_H

#include "sagemakerresponse.h"
#include "describemodelbiasjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelBiasJobDefinitionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeModelBiasJobDefinitionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeModelBiasJobDefinitionResponse(const DescribeModelBiasJobDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeModelBiasJobDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeModelBiasJobDefinitionResponse)
    Q_DISABLE_COPY(DescribeModelBiasJobDefinitionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
