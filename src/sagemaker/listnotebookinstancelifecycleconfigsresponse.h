// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTEBOOKINSTANCELIFECYCLECONFIGSRESPONSE_H
#define QTAWS_LISTNOTEBOOKINSTANCELIFECYCLECONFIGSRESPONSE_H

#include "sagemakerresponse.h"
#include "listnotebookinstancelifecycleconfigsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListNotebookInstanceLifecycleConfigsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListNotebookInstanceLifecycleConfigsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListNotebookInstanceLifecycleConfigsResponse(const ListNotebookInstanceLifecycleConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNotebookInstanceLifecycleConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNotebookInstanceLifecycleConfigsResponse)
    Q_DISABLE_COPY(ListNotebookInstanceLifecycleConfigsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
