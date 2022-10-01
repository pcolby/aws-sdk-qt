// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISKSNAPSHOTREQUEST_P_H
#define QTAWS_CREATEDISKSNAPSHOTREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createdisksnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateDiskSnapshotRequest;

class CreateDiskSnapshotRequestPrivate : public LightsailRequestPrivate {

public:
    CreateDiskSnapshotRequestPrivate(const LightsailRequest::Action action,
                                   CreateDiskSnapshotRequest * const q);
    CreateDiskSnapshotRequestPrivate(const CreateDiskSnapshotRequestPrivate &other,
                                   CreateDiskSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDiskSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
