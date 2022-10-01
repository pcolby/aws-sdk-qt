// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELQUALITYJOBDEFINITIONRESPONSE_H
#define QTAWS_DESCRIBEMODELQUALITYJOBDEFINITIONRESPONSE_H

#include "sagemakerresponse.h"
#include "describemodelqualityjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelQualityJobDefinitionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeModelQualityJobDefinitionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeModelQualityJobDefinitionResponse(const DescribeModelQualityJobDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeModelQualityJobDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeModelQualityJobDefinitionResponse)
    Q_DISABLE_COPY(DescribeModelQualityJobDefinitionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
