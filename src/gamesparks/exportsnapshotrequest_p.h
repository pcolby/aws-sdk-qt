// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTSNAPSHOTREQUEST_P_H
#define QTAWS_EXPORTSNAPSHOTREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "exportsnapshotrequest.h"

namespace QtAws {
namespace GameSparks {

class ExportSnapshotRequest;

class ExportSnapshotRequestPrivate : public GameSparksRequestPrivate {

public:
    ExportSnapshotRequestPrivate(const GameSparksRequest::Action action,
                                   ExportSnapshotRequest * const q);
    ExportSnapshotRequestPrivate(const ExportSnapshotRequestPrivate &other,
                                   ExportSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportSnapshotRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
