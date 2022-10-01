// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELQUALITYJOBDEFINITIONREQUEST_H
#define QTAWS_DESCRIBEMODELQUALITYJOBDEFINITIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelQualityJobDefinitionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeModelQualityJobDefinitionRequest : public SageMakerRequest {

public:
    DescribeModelQualityJobDefinitionRequest(const DescribeModelQualityJobDefinitionRequest &other);
    DescribeModelQualityJobDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeModelQualityJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
