// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINPERMISSIONSPOLICYREQUEST_P_H
#define QTAWS_DELETEDOMAINPERMISSIONSPOLICYREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "deletedomainpermissionspolicyrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DeleteDomainPermissionsPolicyRequest;

class DeleteDomainPermissionsPolicyRequestPrivate : public CodeArtifactRequestPrivate {

public:
    DeleteDomainPermissionsPolicyRequestPrivate(const CodeArtifactRequest::Action action,
                                   DeleteDomainPermissionsPolicyRequest * const q);
    DeleteDomainPermissionsPolicyRequestPrivate(const DeleteDomainPermissionsPolicyRequestPrivate &other,
                                   DeleteDomainPermissionsPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDomainPermissionsPolicyRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
