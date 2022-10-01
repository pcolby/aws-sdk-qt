// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPOSITORYREQUEST_P_H
#define QTAWS_UPDATEREPOSITORYREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "updaterepositoryrequest.h"

namespace QtAws {
namespace CodeArtifact {

class UpdateRepositoryRequest;

class UpdateRepositoryRequestPrivate : public CodeArtifactRequestPrivate {

public:
    UpdateRepositoryRequestPrivate(const CodeArtifactRequest::Action action,
                                   UpdateRepositoryRequest * const q);
    UpdateRepositoryRequestPrivate(const UpdateRepositoryRequestPrivate &other,
                                   UpdateRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRepositoryRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
