// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCESFROMSNAPSHOTREQUEST_P_H
#define QTAWS_CREATEINSTANCESFROMSNAPSHOTREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createinstancesfromsnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateInstancesFromSnapshotRequest;

class CreateInstancesFromSnapshotRequestPrivate : public LightsailRequestPrivate {

public:
    CreateInstancesFromSnapshotRequestPrivate(const LightsailRequest::Action action,
                                   CreateInstancesFromSnapshotRequest * const q);
    CreateInstancesFromSnapshotRequestPrivate(const CreateInstancesFromSnapshotRequestPrivate &other,
                                   CreateInstancesFromSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInstancesFromSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
