// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASESNAPSHOTSREQUEST_P_H
#define QTAWS_GETRELATIONALDATABASESNAPSHOTSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getrelationaldatabasesnapshotsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseSnapshotsRequest;

class GetRelationalDatabaseSnapshotsRequestPrivate : public LightsailRequestPrivate {

public:
    GetRelationalDatabaseSnapshotsRequestPrivate(const LightsailRequest::Action action,
                                   GetRelationalDatabaseSnapshotsRequest * const q);
    GetRelationalDatabaseSnapshotsRequestPrivate(const GetRelationalDatabaseSnapshotsRequestPrivate &other,
                                   GetRelationalDatabaseSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseSnapshotsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
