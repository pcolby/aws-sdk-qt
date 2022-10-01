// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZATIONTOKENRESPONSE_H
#define QTAWS_GETAUTHORIZATIONTOKENRESPONSE_H

#include "codeartifactresponse.h"
#include "getauthorizationtokenrequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetAuthorizationTokenResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT GetAuthorizationTokenResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    GetAuthorizationTokenResponse(const GetAuthorizationTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAuthorizationTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAuthorizationTokenResponse)
    Q_DISABLE_COPY(GetAuthorizationTokenResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
