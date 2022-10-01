// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTEBOOKINSTANCELIFECYCLECONFIGSREQUEST_H
#define QTAWS_LISTNOTEBOOKINSTANCELIFECYCLECONFIGSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListNotebookInstanceLifecycleConfigsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListNotebookInstanceLifecycleConfigsRequest : public SageMakerRequest {

public:
    ListNotebookInstanceLifecycleConfigsRequest(const ListNotebookInstanceLifecycleConfigsRequest &other);
    ListNotebookInstanceLifecycleConfigsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNotebookInstanceLifecycleConfigsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
