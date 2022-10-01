// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPREQUEST_H
#define QTAWS_DESCRIBEAPPREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeAppRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeAppRequest : public SageMakerRequest {

public:
    DescribeAppRequest(const DescribeAppRequest &other);
    DescribeAppRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
