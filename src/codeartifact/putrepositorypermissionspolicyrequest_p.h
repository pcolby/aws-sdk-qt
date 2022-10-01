// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPOSITORYPERMISSIONSPOLICYREQUEST_P_H
#define QTAWS_PUTREPOSITORYPERMISSIONSPOLICYREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "putrepositorypermissionspolicyrequest.h"

namespace QtAws {
namespace CodeArtifact {

class PutRepositoryPermissionsPolicyRequest;

class PutRepositoryPermissionsPolicyRequestPrivate : public CodeArtifactRequestPrivate {

public:
    PutRepositoryPermissionsPolicyRequestPrivate(const CodeArtifactRequest::Action action,
                                   PutRepositoryPermissionsPolicyRequest * const q);
    PutRepositoryPermissionsPolicyRequestPrivate(const PutRepositoryPermissionsPolicyRequestPrivate &other,
                                   PutRepositoryPermissionsPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRepositoryPermissionsPolicyRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
