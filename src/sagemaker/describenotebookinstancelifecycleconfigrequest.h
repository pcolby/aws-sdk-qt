// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTEBOOKINSTANCELIFECYCLECONFIGREQUEST_H
#define QTAWS_DESCRIBENOTEBOOKINSTANCELIFECYCLECONFIGREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeNotebookInstanceLifecycleConfigRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeNotebookInstanceLifecycleConfigRequest : public SageMakerRequest {

public:
    DescribeNotebookInstanceLifecycleConfigRequest(const DescribeNotebookInstanceLifecycleConfigRequest &other);
    DescribeNotebookInstanceLifecycleConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNotebookInstanceLifecycleConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
