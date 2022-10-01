// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSNAPSHOTBLOCKSREQUEST_P_H
#define QTAWS_LISTSNAPSHOTBLOCKSREQUEST_P_H

#include "ebsrequest_p.h"
#include "listsnapshotblocksrequest.h"

namespace QtAws {
namespace Ebs {

class ListSnapshotBlocksRequest;

class ListSnapshotBlocksRequestPrivate : public EbsRequestPrivate {

public:
    ListSnapshotBlocksRequestPrivate(const EbsRequest::Action action,
                                   ListSnapshotBlocksRequest * const q);
    ListSnapshotBlocksRequestPrivate(const ListSnapshotBlocksRequestPrivate &other,
                                   ListSnapshotBlocksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSnapshotBlocksRequest)

};

} // namespace Ebs
} // namespace QtAws

#endif
