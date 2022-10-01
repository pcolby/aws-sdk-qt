// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYPERMISSIONSPOLICYREQUEST_H
#define QTAWS_DELETEREPOSITORYPERMISSIONSPOLICYREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DeleteRepositoryPermissionsPolicyRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT DeleteRepositoryPermissionsPolicyRequest : public CodeArtifactRequest {

public:
    DeleteRepositoryPermissionsPolicyRequest(const DeleteRepositoryPermissionsPolicyRequest &other);
    DeleteRepositoryPermissionsPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRepositoryPermissionsPolicyRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
