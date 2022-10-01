// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYPERMISSIONSPOLICYRESPONSE_P_H
#define QTAWS_DELETEREPOSITORYPERMISSIONSPOLICYRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class DeleteRepositoryPermissionsPolicyResponse;

class DeleteRepositoryPermissionsPolicyResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit DeleteRepositoryPermissionsPolicyResponsePrivate(DeleteRepositoryPermissionsPolicyResponse * const q);

    void parseDeleteRepositoryPermissionsPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRepositoryPermissionsPolicyResponse)
    Q_DISABLE_COPY(DeleteRepositoryPermissionsPolicyResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
