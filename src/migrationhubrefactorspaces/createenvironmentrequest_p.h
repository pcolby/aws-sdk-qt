// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTREQUEST_P_H
#define QTAWS_CREATEENVIRONMENTREQUEST_P_H

#include "migrationhubrefactorspacesrequest_p.h"
#include "createenvironmentrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class CreateEnvironmentRequest;

class CreateEnvironmentRequestPrivate : public MigrationHubRefactorSpacesRequestPrivate {

public:
    CreateEnvironmentRequestPrivate(const MigrationHubRefactorSpacesRequest::Action action,
                                   CreateEnvironmentRequest * const q);
    CreateEnvironmentRequestPrivate(const CreateEnvironmentRequestPrivate &other,
                                   CreateEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEnvironmentRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
