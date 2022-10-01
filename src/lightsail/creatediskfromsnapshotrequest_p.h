// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISKFROMSNAPSHOTREQUEST_P_H
#define QTAWS_CREATEDISKFROMSNAPSHOTREQUEST_P_H

#include "lightsailrequest_p.h"
#include "creatediskfromsnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateDiskFromSnapshotRequest;

class CreateDiskFromSnapshotRequestPrivate : public LightsailRequestPrivate {

public:
    CreateDiskFromSnapshotRequestPrivate(const LightsailRequest::Action action,
                                   CreateDiskFromSnapshotRequest * const q);
    CreateDiskFromSnapshotRequestPrivate(const CreateDiskFromSnapshotRequestPrivate &other,
                                   CreateDiskFromSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDiskFromSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
