// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTEBOOKINSTANCERESPONSE_H
#define QTAWS_DELETENOTEBOOKINSTANCERESPONSE_H

#include "sagemakerresponse.h"
#include "deletenotebookinstancerequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteNotebookInstanceResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteNotebookInstanceResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteNotebookInstanceResponse(const DeleteNotebookInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNotebookInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNotebookInstanceResponse)
    Q_DISABLE_COPY(DeleteNotebookInstanceResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
