// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINPERMISSIONSPOLICYRESPONSE_P_H
#define QTAWS_DELETEDOMAINPERMISSIONSPOLICYRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class DeleteDomainPermissionsPolicyResponse;

class DeleteDomainPermissionsPolicyResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit DeleteDomainPermissionsPolicyResponsePrivate(DeleteDomainPermissionsPolicyResponse * const q);

    void parseDeleteDomainPermissionsPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDomainPermissionsPolicyResponse)
    Q_DISABLE_COPY(DeleteDomainPermissionsPolicyResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
