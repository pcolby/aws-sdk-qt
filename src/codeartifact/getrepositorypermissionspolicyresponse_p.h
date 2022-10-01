// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYPERMISSIONSPOLICYRESPONSE_P_H
#define QTAWS_GETREPOSITORYPERMISSIONSPOLICYRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class GetRepositoryPermissionsPolicyResponse;

class GetRepositoryPermissionsPolicyResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit GetRepositoryPermissionsPolicyResponsePrivate(GetRepositoryPermissionsPolicyResponse * const q);

    void parseGetRepositoryPermissionsPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRepositoryPermissionsPolicyResponse)
    Q_DISABLE_COPY(GetRepositoryPermissionsPolicyResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
