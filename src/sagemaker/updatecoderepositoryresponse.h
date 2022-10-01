// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECODEREPOSITORYRESPONSE_H
#define QTAWS_UPDATECODEREPOSITORYRESPONSE_H

#include "sagemakerresponse.h"
#include "updatecoderepositoryrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateCodeRepositoryResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateCodeRepositoryResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateCodeRepositoryResponse(const UpdateCodeRepositoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCodeRepositoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCodeRepositoryResponse)
    Q_DISABLE_COPY(UpdateCodeRepositoryResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
