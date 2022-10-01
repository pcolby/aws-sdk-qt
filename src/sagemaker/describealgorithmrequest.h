// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALGORITHMREQUEST_H
#define QTAWS_DESCRIBEALGORITHMREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeAlgorithmRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeAlgorithmRequest : public SageMakerRequest {

public:
    DescribeAlgorithmRequest(const DescribeAlgorithmRequest &other);
    DescribeAlgorithmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAlgorithmRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
