// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPOSITORYPERMISSIONSPOLICYRESPONSE_H
#define QTAWS_PUTREPOSITORYPERMISSIONSPOLICYRESPONSE_H

#include "codeartifactresponse.h"
#include "putrepositorypermissionspolicyrequest.h"

namespace QtAws {
namespace CodeArtifact {

class PutRepositoryPermissionsPolicyResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT PutRepositoryPermissionsPolicyResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    PutRepositoryPermissionsPolicyResponse(const PutRepositoryPermissionsPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRepositoryPermissionsPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRepositoryPermissionsPolicyResponse)
    Q_DISABLE_COPY(PutRepositoryPermissionsPolicyResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
