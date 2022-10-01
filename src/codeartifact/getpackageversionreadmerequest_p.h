// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPACKAGEVERSIONREADMEREQUEST_P_H
#define QTAWS_GETPACKAGEVERSIONREADMEREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "getpackageversionreadmerequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetPackageVersionReadmeRequest;

class GetPackageVersionReadmeRequestPrivate : public CodeArtifactRequestPrivate {

public:
    GetPackageVersionReadmeRequestPrivate(const CodeArtifactRequest::Action action,
                                   GetPackageVersionReadmeRequest * const q);
    GetPackageVersionReadmeRequestPrivate(const GetPackageVersionReadmeRequestPrivate &other,
                                   GetPackageVersionReadmeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPackageVersionReadmeRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
