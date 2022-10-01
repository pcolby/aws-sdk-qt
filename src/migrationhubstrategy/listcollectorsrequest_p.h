// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOLLECTORSREQUEST_P_H
#define QTAWS_LISTCOLLECTORSREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "listcollectorsrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class ListCollectorsRequest;

class ListCollectorsRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    ListCollectorsRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   ListCollectorsRequest * const q);
    ListCollectorsRequestPrivate(const ListCollectorsRequestPrivate &other,
                                   ListCollectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCollectorsRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
