// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPIMAGECONFIGREQUEST_H
#define QTAWS_DESCRIBEAPPIMAGECONFIGREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeAppImageConfigRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeAppImageConfigRequest : public SageMakerRequest {

public:
    DescribeAppImageConfigRequest(const DescribeAppImageConfigRequest &other);
    DescribeAppImageConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppImageConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
