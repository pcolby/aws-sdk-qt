// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECODEREPOSITORYREQUEST_H
#define QTAWS_DESCRIBECODEREPOSITORYREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeCodeRepositoryRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeCodeRepositoryRequest : public SageMakerRequest {

public:
    DescribeCodeRepositoryRequest(const DescribeCodeRepositoryRequest &other);
    DescribeCodeRepositoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCodeRepositoryRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
