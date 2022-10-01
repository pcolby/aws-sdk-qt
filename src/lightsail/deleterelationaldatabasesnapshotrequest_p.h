// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERELATIONALDATABASESNAPSHOTREQUEST_P_H
#define QTAWS_DELETERELATIONALDATABASESNAPSHOTREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deleterelationaldatabasesnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteRelationalDatabaseSnapshotRequest;

class DeleteRelationalDatabaseSnapshotRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteRelationalDatabaseSnapshotRequestPrivate(const LightsailRequest::Action action,
                                   DeleteRelationalDatabaseSnapshotRequest * const q);
    DeleteRelationalDatabaseSnapshotRequestPrivate(const DeleteRelationalDatabaseSnapshotRequestPrivate &other,
                                   DeleteRelationalDatabaseSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRelationalDatabaseSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
