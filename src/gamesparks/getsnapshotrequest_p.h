// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTREQUEST_P_H
#define QTAWS_GETSNAPSHOTREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "getsnapshotrequest.h"

namespace QtAws {
namespace GameSparks {

class GetSnapshotRequest;

class GetSnapshotRequestPrivate : public GameSparksRequestPrivate {

public:
    GetSnapshotRequestPrivate(const GameSparksRequest::Action action,
                                   GetSnapshotRequest * const q);
    GetSnapshotRequestPrivate(const GetSnapshotRequestPrivate &other,
                                   GetSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSnapshotRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
