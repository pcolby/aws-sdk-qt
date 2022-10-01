// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECREATEDARTIFACTREQUEST_P_H
#define QTAWS_ASSOCIATECREATEDARTIFACTREQUEST_P_H

#include "migrationhubrequest_p.h"
#include "associatecreatedartifactrequest.h"

namespace QtAws {
namespace MigrationHub {

class AssociateCreatedArtifactRequest;

class AssociateCreatedArtifactRequestPrivate : public MigrationHubRequestPrivate {

public:
    AssociateCreatedArtifactRequestPrivate(const MigrationHubRequest::Action action,
                                   AssociateCreatedArtifactRequest * const q);
    AssociateCreatedArtifactRequestPrivate(const AssociateCreatedArtifactRequestPrivate &other,
                                   AssociateCreatedArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateCreatedArtifactRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
