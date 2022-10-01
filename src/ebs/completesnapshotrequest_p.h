// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETESNAPSHOTREQUEST_P_H
#define QTAWS_COMPLETESNAPSHOTREQUEST_P_H

#include "ebsrequest_p.h"
#include "completesnapshotrequest.h"

namespace QtAws {
namespace Ebs {

class CompleteSnapshotRequest;

class CompleteSnapshotRequestPrivate : public EbsRequestPrivate {

public:
    CompleteSnapshotRequestPrivate(const EbsRequest::Action action,
                                   CompleteSnapshotRequest * const q);
    CompleteSnapshotRequestPrivate(const CompleteSnapshotRequestPrivate &other,
                                   CompleteSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CompleteSnapshotRequest)

};

} // namespace Ebs
} // namespace QtAws

#endif
