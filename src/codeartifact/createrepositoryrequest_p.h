// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPOSITORYREQUEST_P_H
#define QTAWS_CREATEREPOSITORYREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "createrepositoryrequest.h"

namespace QtAws {
namespace CodeArtifact {

class CreateRepositoryRequest;

class CreateRepositoryRequestPrivate : public CodeArtifactRequestPrivate {

public:
    CreateRepositoryRequestPrivate(const CodeArtifactRequest::Action action,
                                   CreateRepositoryRequest * const q);
    CreateRepositoryRequestPrivate(const CreateRepositoryRequestPrivate &other,
                                   CreateRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRepositoryRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
