// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERELATIONALDATABASESNAPSHOTREQUEST_P_H
#define QTAWS_CREATERELATIONALDATABASESNAPSHOTREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createrelationaldatabasesnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateRelationalDatabaseSnapshotRequest;

class CreateRelationalDatabaseSnapshotRequestPrivate : public LightsailRequestPrivate {

public:
    CreateRelationalDatabaseSnapshotRequestPrivate(const LightsailRequest::Action action,
                                   CreateRelationalDatabaseSnapshotRequest * const q);
    CreateRelationalDatabaseSnapshotRequestPrivate(const CreateRelationalDatabaseSnapshotRequestPrivate &other,
                                   CreateRelationalDatabaseSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRelationalDatabaseSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
