// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZATIONTOKENREQUEST_H
#define QTAWS_GETAUTHORIZATIONTOKENREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetAuthorizationTokenRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT GetAuthorizationTokenRequest : public CodeArtifactRequest {

public:
    GetAuthorizationTokenRequest(const GetAuthorizationTokenRequest &other);
    GetAuthorizationTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAuthorizationTokenRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
