// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERSREQUEST_P_H
#define QTAWS_LISTSERVERSREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "listserversrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class ListServersRequest;

class ListServersRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    ListServersRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   ListServersRequest * const q);
    ListServersRequestPrivate(const ListServersRequestPrivate &other,
                                   ListServersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServersRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
