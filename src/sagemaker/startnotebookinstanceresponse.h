// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNOTEBOOKINSTANCERESPONSE_H
#define QTAWS_STARTNOTEBOOKINSTANCERESPONSE_H

#include "sagemakerresponse.h"
#include "startnotebookinstancerequest.h"

namespace QtAws {
namespace SageMaker {

class StartNotebookInstanceResponsePrivate;

class QTAWSSAGEMAKER_EXPORT StartNotebookInstanceResponse : public SageMakerResponse {
    Q_OBJECT

public:
    StartNotebookInstanceResponse(const StartNotebookInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartNotebookInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartNotebookInstanceResponse)
    Q_DISABLE_COPY(StartNotebookInstanceResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
