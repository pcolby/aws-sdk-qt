// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICEREQUEST_P_H
#define QTAWS_CREATESERVICEREQUEST_P_H

#include "migrationhubrefactorspacesrequest_p.h"
#include "createservicerequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class CreateServiceRequest;

class CreateServiceRequestPrivate : public MigrationHubRefactorSpacesRequestPrivate {

public:
    CreateServiceRequestPrivate(const MigrationHubRefactorSpacesRequest::Action action,
                                   CreateServiceRequest * const q);
    CreateServiceRequestPrivate(const CreateServiceRequestPrivate &other,
                                   CreateServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateServiceRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
