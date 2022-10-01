// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISKSNAPSHOTREQUEST_P_H
#define QTAWS_GETDISKSNAPSHOTREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getdisksnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDiskSnapshotRequest;

class GetDiskSnapshotRequestPrivate : public LightsailRequestPrivate {

public:
    GetDiskSnapshotRequestPrivate(const LightsailRequest::Action action,
                                   GetDiskSnapshotRequest * const q);
    GetDiskSnapshotRequestPrivate(const GetDiskSnapshotRequestPrivate &other,
                                   GetDiskSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDiskSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
