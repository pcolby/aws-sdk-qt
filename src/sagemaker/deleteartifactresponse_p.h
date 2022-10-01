// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEARTIFACTRESPONSE_P_H
#define QTAWS_DELETEARTIFACTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteArtifactResponse;

class DeleteArtifactResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteArtifactResponsePrivate(DeleteArtifactResponse * const q);

    void parseDeleteArtifactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteArtifactResponse)
    Q_DISABLE_COPY(DeleteArtifactResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
