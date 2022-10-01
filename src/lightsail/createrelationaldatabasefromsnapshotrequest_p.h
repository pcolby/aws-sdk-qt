// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERELATIONALDATABASEFROMSNAPSHOTREQUEST_P_H
#define QTAWS_CREATERELATIONALDATABASEFROMSNAPSHOTREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createrelationaldatabasefromsnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateRelationalDatabaseFromSnapshotRequest;

class CreateRelationalDatabaseFromSnapshotRequestPrivate : public LightsailRequestPrivate {

public:
    CreateRelationalDatabaseFromSnapshotRequestPrivate(const LightsailRequest::Action action,
                                   CreateRelationalDatabaseFromSnapshotRequest * const q);
    CreateRelationalDatabaseFromSnapshotRequestPrivate(const CreateRelationalDatabaseFromSnapshotRequestPrivate &other,
                                   CreateRelationalDatabaseFromSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRelationalDatabaseFromSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
