// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTEBOOKINSTANCERESPONSE_H
#define QTAWS_UPDATENOTEBOOKINSTANCERESPONSE_H

#include "sagemakerresponse.h"
#include "updatenotebookinstancerequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateNotebookInstanceResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateNotebookInstanceResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateNotebookInstanceResponse(const UpdateNotebookInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNotebookInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNotebookInstanceResponse)
    Q_DISABLE_COPY(UpdateNotebookInstanceResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
