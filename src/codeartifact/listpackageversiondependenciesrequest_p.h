// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGEVERSIONDEPENDENCIESREQUEST_P_H
#define QTAWS_LISTPACKAGEVERSIONDEPENDENCIESREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "listpackageversiondependenciesrequest.h"

namespace QtAws {
namespace CodeArtifact {

class ListPackageVersionDependenciesRequest;

class ListPackageVersionDependenciesRequestPrivate : public CodeArtifactRequestPrivate {

public:
    ListPackageVersionDependenciesRequestPrivate(const CodeArtifactRequest::Action action,
                                   ListPackageVersionDependenciesRequest * const q);
    ListPackageVersionDependenciesRequestPrivate(const ListPackageVersionDependenciesRequestPrivate &other,
                                   ListPackageVersionDependenciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPackageVersionDependenciesRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
