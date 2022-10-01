// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECODEREPOSITORYRESPONSE_H
#define QTAWS_DELETECODEREPOSITORYRESPONSE_H

#include "sagemakerresponse.h"
#include "deletecoderepositoryrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteCodeRepositoryResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteCodeRepositoryResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteCodeRepositoryResponse(const DeleteCodeRepositoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCodeRepositoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCodeRepositoryResponse)
    Q_DISABLE_COPY(DeleteCodeRepositoryResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
