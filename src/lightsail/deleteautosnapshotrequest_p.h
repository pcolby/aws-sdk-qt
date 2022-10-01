// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTOSNAPSHOTREQUEST_P_H
#define QTAWS_DELETEAUTOSNAPSHOTREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deleteautosnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteAutoSnapshotRequest;

class DeleteAutoSnapshotRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteAutoSnapshotRequestPrivate(const LightsailRequest::Action action,
                                   DeleteAutoSnapshotRequest * const q);
    DeleteAutoSnapshotRequestPrivate(const DeleteAutoSnapshotRequestPrivate &other,
                                   DeleteAutoSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAutoSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
