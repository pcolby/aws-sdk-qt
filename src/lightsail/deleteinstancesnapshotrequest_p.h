// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCESNAPSHOTREQUEST_P_H
#define QTAWS_DELETEINSTANCESNAPSHOTREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deleteinstancesnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteInstanceSnapshotRequest;

class DeleteInstanceSnapshotRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteInstanceSnapshotRequestPrivate(const LightsailRequest::Action action,
                                   DeleteInstanceSnapshotRequest * const q);
    DeleteInstanceSnapshotRequestPrivate(const DeleteInstanceSnapshotRequestPrivate &other,
                                   DeleteInstanceSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInstanceSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
