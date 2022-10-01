// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSNAPSHOTSREQUEST_P_H
#define QTAWS_LISTSNAPSHOTSREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "listsnapshotsrequest.h"

namespace QtAws {
namespace GameSparks {

class ListSnapshotsRequest;

class ListSnapshotsRequestPrivate : public GameSparksRequestPrivate {

public:
    ListSnapshotsRequestPrivate(const GameSparksRequest::Action action,
                                   ListSnapshotsRequest * const q);
    ListSnapshotsRequestPrivate(const ListSnapshotsRequestPrivate &other,
                                   ListSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSnapshotsRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
