// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTEBOOKINSTANCEREQUEST_H
#define QTAWS_DESCRIBENOTEBOOKINSTANCEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeNotebookInstanceRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeNotebookInstanceRequest : public SageMakerRequest {

public:
    DescribeNotebookInstanceRequest(const DescribeNotebookInstanceRequest &other);
    DescribeNotebookInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNotebookInstanceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
