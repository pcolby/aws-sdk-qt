// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESNAPSHOTREQUEST_P_H
#define QTAWS_GETINSTANCESNAPSHOTREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getinstancesnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceSnapshotRequest;

class GetInstanceSnapshotRequestPrivate : public LightsailRequestPrivate {

public:
    GetInstanceSnapshotRequestPrivate(const LightsailRequest::Action action,
                                   GetInstanceSnapshotRequest * const q);
    GetInstanceSnapshotRequestPrivate(const GetInstanceSnapshotRequestPrivate &other,
                                   GetInstanceSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInstanceSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
