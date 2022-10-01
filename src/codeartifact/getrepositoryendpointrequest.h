// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYENDPOINTREQUEST_H
#define QTAWS_GETREPOSITORYENDPOINTREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetRepositoryEndpointRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT GetRepositoryEndpointRequest : public CodeArtifactRequest {

public:
    GetRepositoryEndpointRequest(const GetRepositoryEndpointRequest &other);
    GetRepositoryEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRepositoryEndpointRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
