// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINPERMISSIONSPOLICYRESPONSE_P_H
#define QTAWS_GETDOMAINPERMISSIONSPOLICYRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class GetDomainPermissionsPolicyResponse;

class GetDomainPermissionsPolicyResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit GetDomainPermissionsPolicyResponsePrivate(GetDomainPermissionsPolicyResponse * const q);

    void parseGetDomainPermissionsPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDomainPermissionsPolicyResponse)
    Q_DISABLE_COPY(GetDomainPermissionsPolicyResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
