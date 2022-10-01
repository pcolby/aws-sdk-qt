// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYPERMISSIONSPOLICYREQUEST_P_H
#define QTAWS_DELETEREPOSITORYPERMISSIONSPOLICYREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "deleterepositorypermissionspolicyrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DeleteRepositoryPermissionsPolicyRequest;

class DeleteRepositoryPermissionsPolicyRequestPrivate : public CodeArtifactRequestPrivate {

public:
    DeleteRepositoryPermissionsPolicyRequestPrivate(const CodeArtifactRequest::Action action,
                                   DeleteRepositoryPermissionsPolicyRequest * const q);
    DeleteRepositoryPermissionsPolicyRequestPrivate(const DeleteRepositoryPermissionsPolicyRequestPrivate &other,
                                   DeleteRepositoryPermissionsPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRepositoryPermissionsPolicyRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
