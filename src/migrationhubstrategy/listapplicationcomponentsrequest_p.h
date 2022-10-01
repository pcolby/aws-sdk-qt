// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONCOMPONENTSREQUEST_P_H
#define QTAWS_LISTAPPLICATIONCOMPONENTSREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "listapplicationcomponentsrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class ListApplicationComponentsRequest;

class ListApplicationComponentsRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    ListApplicationComponentsRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   ListApplicationComponentsRequest * const q);
    ListApplicationComponentsRequestPrivate(const ListApplicationComponentsRequestPrivate &other,
                                   ListApplicationComponentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApplicationComponentsRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
