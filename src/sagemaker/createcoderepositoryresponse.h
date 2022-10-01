// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECODEREPOSITORYRESPONSE_H
#define QTAWS_CREATECODEREPOSITORYRESPONSE_H

#include "sagemakerresponse.h"
#include "createcoderepositoryrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateCodeRepositoryResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateCodeRepositoryResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateCodeRepositoryResponse(const CreateCodeRepositoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCodeRepositoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCodeRepositoryResponse)
    Q_DISABLE_COPY(CreateCodeRepositoryResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
