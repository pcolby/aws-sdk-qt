// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPNOTEBOOKINSTANCERESPONSE_H
#define QTAWS_STOPNOTEBOOKINSTANCERESPONSE_H

#include "sagemakerresponse.h"
#include "stopnotebookinstancerequest.h"

namespace QtAws {
namespace SageMaker {

class StopNotebookInstanceResponsePrivate;

class QTAWSSAGEMAKER_EXPORT StopNotebookInstanceResponse : public SageMakerResponse {
    Q_OBJECT

public:
    StopNotebookInstanceResponse(const StopNotebookInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopNotebookInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopNotebookInstanceResponse)
    Q_DISABLE_COPY(StopNotebookInstanceResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
