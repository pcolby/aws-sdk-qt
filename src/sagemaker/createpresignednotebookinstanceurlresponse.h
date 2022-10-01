// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRESIGNEDNOTEBOOKINSTANCEURLRESPONSE_H
#define QTAWS_CREATEPRESIGNEDNOTEBOOKINSTANCEURLRESPONSE_H

#include "sagemakerresponse.h"
#include "createpresignednotebookinstanceurlrequest.h"

namespace QtAws {
namespace SageMaker {

class CreatePresignedNotebookInstanceUrlResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreatePresignedNotebookInstanceUrlResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreatePresignedNotebookInstanceUrlResponse(const CreatePresignedNotebookInstanceUrlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePresignedNotebookInstanceUrlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePresignedNotebookInstanceUrlResponse)
    Q_DISABLE_COPY(CreatePresignedNotebookInstanceUrlResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
