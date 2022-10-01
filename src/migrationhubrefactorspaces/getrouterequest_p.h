// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTEREQUEST_P_H
#define QTAWS_GETROUTEREQUEST_P_H

#include "migrationhubrefactorspacesrequest_p.h"
#include "getrouterequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class GetRouteRequest;

class GetRouteRequestPrivate : public MigrationHubRefactorSpacesRequestPrivate {

public:
    GetRouteRequestPrivate(const MigrationHubRefactorSpacesRequest::Action action,
                                   GetRouteRequest * const q);
    GetRouteRequestPrivate(const GetRouteRequestPrivate &other,
                                   GetRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRouteRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
