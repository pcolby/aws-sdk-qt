// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEARTIFACTRESPONSE_P_H
#define QTAWS_CREATEARTIFACTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateArtifactResponse;

class CreateArtifactResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateArtifactResponsePrivate(CreateArtifactResponse * const q);

    void parseCreateArtifactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateArtifactResponse)
    Q_DISABLE_COPY(CreateArtifactResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
