// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYPACKAGEVERSIONSREQUEST_P_H
#define QTAWS_COPYPACKAGEVERSIONSREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "copypackageversionsrequest.h"

namespace QtAws {
namespace CodeArtifact {

class CopyPackageVersionsRequest;

class CopyPackageVersionsRequestPrivate : public CodeArtifactRequestPrivate {

public:
    CopyPackageVersionsRequestPrivate(const CodeArtifactRequest::Action action,
                                   CopyPackageVersionsRequest * const q);
    CopyPackageVersionsRequestPrivate(const CopyPackageVersionsRequestPrivate &other,
                                   CopyPackageVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyPackageVersionsRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
