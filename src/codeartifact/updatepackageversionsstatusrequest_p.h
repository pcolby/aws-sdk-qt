// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPACKAGEVERSIONSSTATUSREQUEST_P_H
#define QTAWS_UPDATEPACKAGEVERSIONSSTATUSREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "updatepackageversionsstatusrequest.h"

namespace QtAws {
namespace CodeArtifact {

class UpdatePackageVersionsStatusRequest;

class UpdatePackageVersionsStatusRequestPrivate : public CodeArtifactRequestPrivate {

public:
    UpdatePackageVersionsStatusRequestPrivate(const CodeArtifactRequest::Action action,
                                   UpdatePackageVersionsStatusRequest * const q);
    UpdatePackageVersionsStatusRequestPrivate(const UpdatePackageVersionsStatusRequestPrivate &other,
                                   UpdatePackageVersionsStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePackageVersionsStatusRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
