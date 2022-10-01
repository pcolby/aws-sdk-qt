// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCESNAPSHOTREQUEST_P_H
#define QTAWS_CREATEINSTANCESNAPSHOTREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createinstancesnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateInstanceSnapshotRequest;

class CreateInstanceSnapshotRequestPrivate : public LightsailRequestPrivate {

public:
    CreateInstanceSnapshotRequestPrivate(const LightsailRequest::Action action,
                                   CreateInstanceSnapshotRequest * const q);
    CreateInstanceSnapshotRequestPrivate(const CreateInstanceSnapshotRequestPrivate &other,
                                   CreateInstanceSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInstanceSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
