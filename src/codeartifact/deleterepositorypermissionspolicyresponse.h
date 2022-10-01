// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYPERMISSIONSPOLICYRESPONSE_H
#define QTAWS_DELETEREPOSITORYPERMISSIONSPOLICYRESPONSE_H

#include "codeartifactresponse.h"
#include "deleterepositorypermissionspolicyrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DeleteRepositoryPermissionsPolicyResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT DeleteRepositoryPermissionsPolicyResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    DeleteRepositoryPermissionsPolicyResponse(const DeleteRepositoryPermissionsPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRepositoryPermissionsPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRepositoryPermissionsPolicyResponse)
    Q_DISABLE_COPY(DeleteRepositoryPermissionsPolicyResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
