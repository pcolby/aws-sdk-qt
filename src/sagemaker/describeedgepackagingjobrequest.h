// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEDGEPACKAGINGJOBREQUEST_H
#define QTAWS_DESCRIBEEDGEPACKAGINGJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeEdgePackagingJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeEdgePackagingJobRequest : public SageMakerRequest {

public:
    DescribeEdgePackagingJobRequest(const DescribeEdgePackagingJobRequest &other);
    DescribeEdgePackagingJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEdgePackagingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
