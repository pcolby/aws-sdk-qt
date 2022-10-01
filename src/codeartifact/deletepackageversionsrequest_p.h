// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPACKAGEVERSIONSREQUEST_P_H
#define QTAWS_DELETEPACKAGEVERSIONSREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "deletepackageversionsrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DeletePackageVersionsRequest;

class DeletePackageVersionsRequestPrivate : public CodeArtifactRequestPrivate {

public:
    DeletePackageVersionsRequestPrivate(const CodeArtifactRequest::Action action,
                                   DeletePackageVersionsRequest * const q);
    DeletePackageVersionsRequestPrivate(const DeletePackageVersionsRequestPrivate &other,
                                   DeletePackageVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePackageVersionsRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
