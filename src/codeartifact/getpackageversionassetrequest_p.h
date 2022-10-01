// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPACKAGEVERSIONASSETREQUEST_P_H
#define QTAWS_GETPACKAGEVERSIONASSETREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "getpackageversionassetrequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetPackageVersionAssetRequest;

class GetPackageVersionAssetRequestPrivate : public CodeArtifactRequestPrivate {

public:
    GetPackageVersionAssetRequestPrivate(const CodeArtifactRequest::Action action,
                                   GetPackageVersionAssetRequest * const q);
    GetPackageVersionAssetRequestPrivate(const GetPackageVersionAssetRequestPrivate &other,
                                   GetPackageVersionAssetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPackageVersionAssetRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
