// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTCONFIGREQUEST_H
#define QTAWS_DESCRIBEENDPOINTCONFIGREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeEndpointConfigRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeEndpointConfigRequest : public SageMakerRequest {

public:
    DescribeEndpointConfigRequest(const DescribeEndpointConfigRequest &other);
    DescribeEndpointConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
