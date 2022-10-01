// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISPOSEPACKAGEVERSIONSREQUEST_P_H
#define QTAWS_DISPOSEPACKAGEVERSIONSREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "disposepackageversionsrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DisposePackageVersionsRequest;

class DisposePackageVersionsRequestPrivate : public CodeArtifactRequestPrivate {

public:
    DisposePackageVersionsRequestPrivate(const CodeArtifactRequest::Action action,
                                   DisposePackageVersionsRequest * const q);
    DisposePackageVersionsRequestPrivate(const DisposePackageVersionsRequestPrivate &other,
                                   DisposePackageVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisposePackageVersionsRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
