// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINPERMISSIONSPOLICYRESPONSE_H
#define QTAWS_DELETEDOMAINPERMISSIONSPOLICYRESPONSE_H

#include "codeartifactresponse.h"
#include "deletedomainpermissionspolicyrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DeleteDomainPermissionsPolicyResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT DeleteDomainPermissionsPolicyResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    DeleteDomainPermissionsPolicyResponse(const DeleteDomainPermissionsPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDomainPermissionsPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainPermissionsPolicyResponse)
    Q_DISABLE_COPY(DeleteDomainPermissionsPolicyResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
