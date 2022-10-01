// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESNAPSHOTSREQUEST_P_H
#define QTAWS_GETINSTANCESNAPSHOTSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getinstancesnapshotsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceSnapshotsRequest;

class GetInstanceSnapshotsRequestPrivate : public LightsailRequestPrivate {

public:
    GetInstanceSnapshotsRequestPrivate(const LightsailRequest::Action action,
                                   GetInstanceSnapshotsRequest * const q);
    GetInstanceSnapshotsRequestPrivate(const GetInstanceSnapshotsRequestPrivate &other,
                                   GetInstanceSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInstanceSnapshotsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
