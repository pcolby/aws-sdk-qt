// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGEVERSIONASSETSREQUEST_P_H
#define QTAWS_LISTPACKAGEVERSIONASSETSREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "listpackageversionassetsrequest.h"

namespace QtAws {
namespace CodeArtifact {

class ListPackageVersionAssetsRequest;

class ListPackageVersionAssetsRequestPrivate : public CodeArtifactRequestPrivate {

public:
    ListPackageVersionAssetsRequestPrivate(const CodeArtifactRequest::Action action,
                                   ListPackageVersionAssetsRequest * const q);
    ListPackageVersionAssetsRequestPrivate(const ListPackageVersionAssetsRequestPrivate &other,
                                   ListPackageVersionAssetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPackageVersionAssetsRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
