// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZATIONTOKENRESPONSE_P_H
#define QTAWS_GETAUTHORIZATIONTOKENRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class GetAuthorizationTokenResponse;

class GetAuthorizationTokenResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit GetAuthorizationTokenResponsePrivate(GetAuthorizationTokenResponse * const q);

    void parseGetAuthorizationTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAuthorizationTokenResponse)
    Q_DISABLE_COPY(GetAuthorizationTokenResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
