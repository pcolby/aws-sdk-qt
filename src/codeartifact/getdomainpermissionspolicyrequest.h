// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINPERMISSIONSPOLICYREQUEST_H
#define QTAWS_GETDOMAINPERMISSIONSPOLICYREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetDomainPermissionsPolicyRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT GetDomainPermissionsPolicyRequest : public CodeArtifactRequest {

public:
    GetDomainPermissionsPolicyRequest(const GetDomainPermissionsPolicyRequest &other);
    GetDomainPermissionsPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainPermissionsPolicyRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
