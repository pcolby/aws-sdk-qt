// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEARTIFACTRESPONSE_H
#define QTAWS_DELETEARTIFACTRESPONSE_H

#include "sagemakerresponse.h"
#include "deleteartifactrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteArtifactResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteArtifactResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteArtifactResponse(const DeleteArtifactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteArtifactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteArtifactResponse)
    Q_DISABLE_COPY(DeleteArtifactResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
