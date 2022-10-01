// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDOMAINPERMISSIONSPOLICYRESPONSE_H
#define QTAWS_PUTDOMAINPERMISSIONSPOLICYRESPONSE_H

#include "codeartifactresponse.h"
#include "putdomainpermissionspolicyrequest.h"

namespace QtAws {
namespace CodeArtifact {

class PutDomainPermissionsPolicyResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT PutDomainPermissionsPolicyResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    PutDomainPermissionsPolicyResponse(const PutDomainPermissionsPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutDomainPermissionsPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDomainPermissionsPolicyResponse)
    Q_DISABLE_COPY(PutDomainPermissionsPolicyResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
