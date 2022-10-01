// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTEREQUEST_P_H
#define QTAWS_CREATEROUTEREQUEST_P_H

#include "migrationhubrefactorspacesrequest_p.h"
#include "createrouterequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class CreateRouteRequest;

class CreateRouteRequestPrivate : public MigrationHubRefactorSpacesRequestPrivate {

public:
    CreateRouteRequestPrivate(const MigrationHubRefactorSpacesRequest::Action action,
                                   CreateRouteRequest * const q);
    CreateRouteRequestPrivate(const CreateRouteRequestPrivate &other,
                                   CreateRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRouteRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
