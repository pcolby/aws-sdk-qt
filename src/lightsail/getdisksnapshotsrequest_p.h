// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISKSNAPSHOTSREQUEST_P_H
#define QTAWS_GETDISKSNAPSHOTSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getdisksnapshotsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDiskSnapshotsRequest;

class GetDiskSnapshotsRequestPrivate : public LightsailRequestPrivate {

public:
    GetDiskSnapshotsRequestPrivate(const LightsailRequest::Action action,
                                   GetDiskSnapshotsRequest * const q);
    GetDiskSnapshotsRequestPrivate(const GetDiskSnapshotsRequestPrivate &other,
                                   GetDiskSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDiskSnapshotsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
