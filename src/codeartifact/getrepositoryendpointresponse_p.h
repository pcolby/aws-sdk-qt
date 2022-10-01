// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYENDPOINTRESPONSE_P_H
#define QTAWS_GETREPOSITORYENDPOINTRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class GetRepositoryEndpointResponse;

class GetRepositoryEndpointResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit GetRepositoryEndpointResponsePrivate(GetRepositoryEndpointResponse * const q);

    void parseGetRepositoryEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRepositoryEndpointResponse)
    Q_DISABLE_COPY(GetRepositoryEndpointResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
