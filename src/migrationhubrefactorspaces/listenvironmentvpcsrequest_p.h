// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTVPCSREQUEST_P_H
#define QTAWS_LISTENVIRONMENTVPCSREQUEST_P_H

#include "migrationhubrefactorspacesrequest_p.h"
#include "listenvironmentvpcsrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class ListEnvironmentVpcsRequest;

class ListEnvironmentVpcsRequestPrivate : public MigrationHubRefactorSpacesRequestPrivate {

public:
    ListEnvironmentVpcsRequestPrivate(const MigrationHubRefactorSpacesRequest::Action action,
                                   ListEnvironmentVpcsRequest * const q);
    ListEnvironmentVpcsRequestPrivate(const ListEnvironmentVpcsRequestPrivate &other,
                                   ListEnvironmentVpcsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentVpcsRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
