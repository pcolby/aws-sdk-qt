// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPOSITORYPERMISSIONSPOLICYRESPONSE_P_H
#define QTAWS_PUTREPOSITORYPERMISSIONSPOLICYRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class PutRepositoryPermissionsPolicyResponse;

class PutRepositoryPermissionsPolicyResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit PutRepositoryPermissionsPolicyResponsePrivate(PutRepositoryPermissionsPolicyResponse * const q);

    void parsePutRepositoryPermissionsPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRepositoryPermissionsPolicyResponse)
    Q_DISABLE_COPY(PutRepositoryPermissionsPolicyResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
