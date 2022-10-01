// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYENDPOINTREQUEST_P_H
#define QTAWS_GETREPOSITORYENDPOINTREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "getrepositoryendpointrequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetRepositoryEndpointRequest;

class GetRepositoryEndpointRequestPrivate : public CodeArtifactRequestPrivate {

public:
    GetRepositoryEndpointRequestPrivate(const CodeArtifactRequest::Action action,
                                   GetRepositoryEndpointRequest * const q);
    GetRepositoryEndpointRequestPrivate(const GetRepositoryEndpointRequestPrivate &other,
                                   GetRepositoryEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRepositoryEndpointRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
