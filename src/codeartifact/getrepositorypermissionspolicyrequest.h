// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYPERMISSIONSPOLICYREQUEST_H
#define QTAWS_GETREPOSITORYPERMISSIONSPOLICYREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetRepositoryPermissionsPolicyRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT GetRepositoryPermissionsPolicyRequest : public CodeArtifactRequest {

public:
    GetRepositoryPermissionsPolicyRequest(const GetRepositoryPermissionsPolicyRequest &other);
    GetRepositoryPermissionsPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRepositoryPermissionsPolicyRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
