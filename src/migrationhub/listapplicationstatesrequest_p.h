// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSTATESREQUEST_P_H
#define QTAWS_LISTAPPLICATIONSTATESREQUEST_P_H

#include "migrationhubrequest_p.h"
#include "listapplicationstatesrequest.h"

namespace QtAws {
namespace MigrationHub {

class ListApplicationStatesRequest;

class ListApplicationStatesRequestPrivate : public MigrationHubRequestPrivate {

public:
    ListApplicationStatesRequestPrivate(const MigrationHubRequest::Action action,
                                   ListApplicationStatesRequest * const q);
    ListApplicationStatesRequestPrivate(const ListApplicationStatesRequestPrivate &other,
                                   ListApplicationStatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApplicationStatesRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
