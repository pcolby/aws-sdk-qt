// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECREATEDARTIFACTREQUEST_P_H
#define QTAWS_DISASSOCIATECREATEDARTIFACTREQUEST_P_H

#include "migrationhubrequest_p.h"
#include "disassociatecreatedartifactrequest.h"

namespace QtAws {
namespace MigrationHub {

class DisassociateCreatedArtifactRequest;

class DisassociateCreatedArtifactRequestPrivate : public MigrationHubRequestPrivate {

public:
    DisassociateCreatedArtifactRequestPrivate(const MigrationHubRequest::Action action,
                                   DisassociateCreatedArtifactRequest * const q);
    DisassociateCreatedArtifactRequestPrivate(const DisassociateCreatedArtifactRequestPrivate &other,
                                   DisassociateCreatedArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateCreatedArtifactRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
