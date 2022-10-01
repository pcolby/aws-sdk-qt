// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROCESSINGJOBREQUEST_H
#define QTAWS_DESCRIBEPROCESSINGJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeProcessingJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeProcessingJobRequest : public SageMakerRequest {

public:
    DescribeProcessingJobRequest(const DescribeProcessingJobRequest &other);
    DescribeProcessingJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProcessingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
