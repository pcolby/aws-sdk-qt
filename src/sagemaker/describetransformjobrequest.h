// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSFORMJOBREQUEST_H
#define QTAWS_DESCRIBETRANSFORMJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeTransformJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeTransformJobRequest : public SageMakerRequest {

public:
    DescribeTransformJobRequest(const DescribeTransformJobRequest &other);
    DescribeTransformJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransformJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
