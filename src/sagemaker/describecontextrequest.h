// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTEXTREQUEST_H
#define QTAWS_DESCRIBECONTEXTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeContextRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeContextRequest : public SageMakerRequest {

public:
    DescribeContextRequest(const DescribeContextRequest &other);
    DescribeContextRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContextRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
