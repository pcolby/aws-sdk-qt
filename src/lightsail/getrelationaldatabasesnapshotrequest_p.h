// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASESNAPSHOTREQUEST_P_H
#define QTAWS_GETRELATIONALDATABASESNAPSHOTREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getrelationaldatabasesnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseSnapshotRequest;

class GetRelationalDatabaseSnapshotRequestPrivate : public LightsailRequestPrivate {

public:
    GetRelationalDatabaseSnapshotRequestPrivate(const LightsailRequest::Action action,
                                   GetRelationalDatabaseSnapshotRequest * const q);
    GetRelationalDatabaseSnapshotRequestPrivate(const GetRelationalDatabaseSnapshotRequestPrivate &other,
                                   GetRelationalDatabaseSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
