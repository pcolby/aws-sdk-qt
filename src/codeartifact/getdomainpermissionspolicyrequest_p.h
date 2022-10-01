// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINPERMISSIONSPOLICYREQUEST_P_H
#define QTAWS_GETDOMAINPERMISSIONSPOLICYREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "getdomainpermissionspolicyrequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetDomainPermissionsPolicyRequest;

class GetDomainPermissionsPolicyRequestPrivate : public CodeArtifactRequestPrivate {

public:
    GetDomainPermissionsPolicyRequestPrivate(const CodeArtifactRequest::Action action,
                                   GetDomainPermissionsPolicyRequest * const q);
    GetDomainPermissionsPolicyRequestPrivate(const GetDomainPermissionsPolicyRequestPrivate &other,
                                   GetDomainPermissionsPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDomainPermissionsPolicyRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
