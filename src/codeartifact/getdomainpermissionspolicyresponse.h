// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINPERMISSIONSPOLICYRESPONSE_H
#define QTAWS_GETDOMAINPERMISSIONSPOLICYRESPONSE_H

#include "codeartifactresponse.h"
#include "getdomainpermissionspolicyrequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetDomainPermissionsPolicyResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT GetDomainPermissionsPolicyResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    GetDomainPermissionsPolicyResponse(const GetDomainPermissionsPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDomainPermissionsPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainPermissionsPolicyResponse)
    Q_DISABLE_COPY(GetDomainPermissionsPolicyResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
