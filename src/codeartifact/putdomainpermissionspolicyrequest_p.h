// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDOMAINPERMISSIONSPOLICYREQUEST_P_H
#define QTAWS_PUTDOMAINPERMISSIONSPOLICYREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "putdomainpermissionspolicyrequest.h"

namespace QtAws {
namespace CodeArtifact {

class PutDomainPermissionsPolicyRequest;

class PutDomainPermissionsPolicyRequestPrivate : public CodeArtifactRequestPrivate {

public:
    PutDomainPermissionsPolicyRequestPrivate(const CodeArtifactRequest::Action action,
                                   PutDomainPermissionsPolicyRequest * const q);
    PutDomainPermissionsPolicyRequestPrivate(const PutDomainPermissionsPolicyRequestPrivate &other,
                                   PutDomainPermissionsPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDomainPermissionsPolicyRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
