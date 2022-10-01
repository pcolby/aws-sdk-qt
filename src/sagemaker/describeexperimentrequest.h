// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPERIMENTREQUEST_H
#define QTAWS_DESCRIBEEXPERIMENTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeExperimentRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeExperimentRequest : public SageMakerRequest {

public:
    DescribeExperimentRequest(const DescribeExperimentRequest &other);
    DescribeExperimentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExperimentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
