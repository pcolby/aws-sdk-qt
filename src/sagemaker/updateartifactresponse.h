// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEARTIFACTRESPONSE_H
#define QTAWS_UPDATEARTIFACTRESPONSE_H

#include "sagemakerresponse.h"
#include "updateartifactrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateArtifactResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateArtifactResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateArtifactResponse(const UpdateArtifactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateArtifactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateArtifactResponse)
    Q_DISABLE_COPY(UpdateArtifactResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
