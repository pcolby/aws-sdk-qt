// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGEVERSIONSREQUEST_P_H
#define QTAWS_LISTPACKAGEVERSIONSREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "listpackageversionsrequest.h"

namespace QtAws {
namespace CodeArtifact {

class ListPackageVersionsRequest;

class ListPackageVersionsRequestPrivate : public CodeArtifactRequestPrivate {

public:
    ListPackageVersionsRequestPrivate(const CodeArtifactRequest::Action action,
                                   ListPackageVersionsRequest * const q);
    ListPackageVersionsRequestPrivate(const ListPackageVersionsRequestPrivate &other,
                                   ListPackageVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPackageVersionsRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
