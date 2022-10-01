// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYPERMISSIONSPOLICYREQUEST_P_H
#define QTAWS_GETREPOSITORYPERMISSIONSPOLICYREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "getrepositorypermissionspolicyrequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetRepositoryPermissionsPolicyRequest;

class GetRepositoryPermissionsPolicyRequestPrivate : public CodeArtifactRequestPrivate {

public:
    GetRepositoryPermissionsPolicyRequestPrivate(const CodeArtifactRequest::Action action,
                                   GetRepositoryPermissionsPolicyRequest * const q);
    GetRepositoryPermissionsPolicyRequestPrivate(const GetRepositoryPermissionsPolicyRequestPrivate &other,
                                   GetRepositoryPermissionsPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRepositoryPermissionsPolicyRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
