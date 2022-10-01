// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTEBOOKINSTANCESRESPONSE_H
#define QTAWS_LISTNOTEBOOKINSTANCESRESPONSE_H

#include "sagemakerresponse.h"
#include "listnotebookinstancesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListNotebookInstancesResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListNotebookInstancesResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListNotebookInstancesResponse(const ListNotebookInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNotebookInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNotebookInstancesResponse)
    Q_DISABLE_COPY(ListNotebookInstancesResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
