// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYPERMISSIONSPOLICYRESPONSE_H
#define QTAWS_GETREPOSITORYPERMISSIONSPOLICYRESPONSE_H

#include "codeartifactresponse.h"
#include "getrepositorypermissionspolicyrequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetRepositoryPermissionsPolicyResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT GetRepositoryPermissionsPolicyResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    GetRepositoryPermissionsPolicyResponse(const GetRepositoryPermissionsPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRepositoryPermissionsPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRepositoryPermissionsPolicyResponse)
    Q_DISABLE_COPY(GetRepositoryPermissionsPolicyResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
