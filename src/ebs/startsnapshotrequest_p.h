// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSNAPSHOTREQUEST_P_H
#define QTAWS_STARTSNAPSHOTREQUEST_P_H

#include "ebsrequest_p.h"
#include "startsnapshotrequest.h"

namespace QtAws {
namespace Ebs {

class StartSnapshotRequest;

class StartSnapshotRequestPrivate : public EbsRequestPrivate {

public:
    StartSnapshotRequestPrivate(const EbsRequest::Action action,
                                   StartSnapshotRequest * const q);
    StartSnapshotRequestPrivate(const StartSnapshotRequestPrivate &other,
                                   StartSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartSnapshotRequest)

};

} // namespace Ebs
} // namespace QtAws

#endif
