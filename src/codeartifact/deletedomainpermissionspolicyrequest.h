// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINPERMISSIONSPOLICYREQUEST_H
#define QTAWS_DELETEDOMAINPERMISSIONSPOLICYREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DeleteDomainPermissionsPolicyRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT DeleteDomainPermissionsPolicyRequest : public CodeArtifactRequest {

public:
    DeleteDomainPermissionsPolicyRequest(const DeleteDomainPermissionsPolicyRequest &other);
    DeleteDomainPermissionsPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainPermissionsPolicyRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
