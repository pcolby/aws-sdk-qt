// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATAQUALITYJOBDEFINITIONREQUEST_H
#define QTAWS_DESCRIBEDATAQUALITYJOBDEFINITIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeDataQualityJobDefinitionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeDataQualityJobDefinitionRequest : public SageMakerRequest {

public:
    DescribeDataQualityJobDefinitionRequest(const DescribeDataQualityJobDefinitionRequest &other);
    DescribeDataQualityJobDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataQualityJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
