// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDOMAINPERMISSIONSPOLICYRESPONSE_P_H
#define QTAWS_PUTDOMAINPERMISSIONSPOLICYRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class PutDomainPermissionsPolicyResponse;

class PutDomainPermissionsPolicyResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit PutDomainPermissionsPolicyResponsePrivate(PutDomainPermissionsPolicyResponse * const q);

    void parsePutDomainPermissionsPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutDomainPermissionsPolicyResponse)
    Q_DISABLE_COPY(PutDomainPermissionsPolicyResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
