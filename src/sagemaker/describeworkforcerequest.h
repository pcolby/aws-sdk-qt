// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKFORCEREQUEST_H
#define QTAWS_DESCRIBEWORKFORCEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeWorkforceRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeWorkforceRequest : public SageMakerRequest {

public:
    DescribeWorkforceRequest(const DescribeWorkforceRequest &other);
    DescribeWorkforceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkforceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
