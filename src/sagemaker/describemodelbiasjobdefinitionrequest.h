// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELBIASJOBDEFINITIONREQUEST_H
#define QTAWS_DESCRIBEMODELBIASJOBDEFINITIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelBiasJobDefinitionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeModelBiasJobDefinitionRequest : public SageMakerRequest {

public:
    DescribeModelBiasJobDefinitionRequest(const DescribeModelBiasJobDefinitionRequest &other);
    DescribeModelBiasJobDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeModelBiasJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
