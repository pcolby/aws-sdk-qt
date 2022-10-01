// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSNAPSHOTSINRECYCLEBINREQUEST_P_H
#define QTAWS_LISTSNAPSHOTSINRECYCLEBINREQUEST_P_H

#include "ec2request_p.h"
#include "listsnapshotsinrecyclebinrequest.h"

namespace QtAws {
namespace Ec2 {

class ListSnapshotsInRecycleBinRequest;

class ListSnapshotsInRecycleBinRequestPrivate : public Ec2RequestPrivate {

public:
    ListSnapshotsInRecycleBinRequestPrivate(const Ec2Request::Action action,
                                   ListSnapshotsInRecycleBinRequest * const q);
    ListSnapshotsInRecycleBinRequestPrivate(const ListSnapshotsInRecycleBinRequestPrivate &other,
                                   ListSnapshotsInRecycleBinRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSnapshotsInRecycleBinRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
