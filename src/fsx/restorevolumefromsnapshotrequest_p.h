// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREVOLUMEFROMSNAPSHOTREQUEST_P_H
#define QTAWS_RESTOREVOLUMEFROMSNAPSHOTREQUEST_P_H

#include "fsxrequest_p.h"
#include "restorevolumefromsnapshotrequest.h"

namespace QtAws {
namespace FSx {

class RestoreVolumeFromSnapshotRequest;

class RestoreVolumeFromSnapshotRequestPrivate : public FSxRequestPrivate {

public:
    RestoreVolumeFromSnapshotRequestPrivate(const FSxRequest::Action action,
                                   RestoreVolumeFromSnapshotRequest * const q);
    RestoreVolumeFromSnapshotRequestPrivate(const RestoreVolumeFromSnapshotRequestPrivate &other,
                                   RestoreVolumeFromSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreVolumeFromSnapshotRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
