// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTUDIOLIFECYCLECONFIGREQUEST_H
#define QTAWS_DESCRIBESTUDIOLIFECYCLECONFIGREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeStudioLifecycleConfigRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeStudioLifecycleConfigRequest : public SageMakerRequest {

public:
    DescribeStudioLifecycleConfigRequest(const DescribeStudioLifecycleConfigRequest &other);
    DescribeStudioLifecycleConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStudioLifecycleConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
