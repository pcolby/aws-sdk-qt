// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTEBOOKINSTANCESREQUEST_H
#define QTAWS_LISTNOTEBOOKINSTANCESREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListNotebookInstancesRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListNotebookInstancesRequest : public SageMakerRequest {

public:
    ListNotebookInstancesRequest(const ListNotebookInstancesRequest &other);
    ListNotebookInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNotebookInstancesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
