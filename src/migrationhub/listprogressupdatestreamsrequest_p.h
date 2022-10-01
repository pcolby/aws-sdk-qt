// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROGRESSUPDATESTREAMSREQUEST_P_H
#define QTAWS_LISTPROGRESSUPDATESTREAMSREQUEST_P_H

#include "migrationhubrequest_p.h"
#include "listprogressupdatestreamsrequest.h"

namespace QtAws {
namespace MigrationHub {

class ListProgressUpdateStreamsRequest;

class ListProgressUpdateStreamsRequestPrivate : public MigrationHubRequestPrivate {

public:
    ListProgressUpdateStreamsRequestPrivate(const MigrationHubRequest::Action action,
                                   ListProgressUpdateStreamsRequest * const q);
    ListProgressUpdateStreamsRequestPrivate(const ListProgressUpdateStreamsRequestPrivate &other,
                                   ListProgressUpdateStreamsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProgressUpdateStreamsRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
