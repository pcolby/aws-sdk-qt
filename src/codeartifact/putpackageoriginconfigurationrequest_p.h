// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPACKAGEORIGINCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTPACKAGEORIGINCONFIGURATIONREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "putpackageoriginconfigurationrequest.h"

namespace QtAws {
namespace CodeArtifact {

class PutPackageOriginConfigurationRequest;

class PutPackageOriginConfigurationRequestPrivate : public CodeArtifactRequestPrivate {

public:
    PutPackageOriginConfigurationRequestPrivate(const CodeArtifactRequest::Action action,
                                   PutPackageOriginConfigurationRequest * const q);
    PutPackageOriginConfigurationRequestPrivate(const PutPackageOriginConfigurationRequestPrivate &other,
                                   PutPackageOriginConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutPackageOriginConfigurationRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
