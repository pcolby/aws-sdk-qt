// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYENDPOINTRESPONSE_H
#define QTAWS_GETREPOSITORYENDPOINTRESPONSE_H

#include "codeartifactresponse.h"
#include "getrepositoryendpointrequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetRepositoryEndpointResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT GetRepositoryEndpointResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    GetRepositoryEndpointResponse(const GetRepositoryEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRepositoryEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRepositoryEndpointResponse)
    Q_DISABLE_COPY(GetRepositoryEndpointResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
