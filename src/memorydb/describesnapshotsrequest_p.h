// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSREQUEST_P_H
#define QTAWS_DESCRIBESNAPSHOTSREQUEST_P_H

#include "memorydbrequest_p.h"
#include "describesnapshotsrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeSnapshotsRequest;

class DescribeSnapshotsRequestPrivate : public MemoryDbRequestPrivate {

public:
    DescribeSnapshotsRequestPrivate(const MemoryDbRequest::Action action,
                                   DescribeSnapshotsRequest * const q);
    DescribeSnapshotsRequestPrivate(const DescribeSnapshotsRequestPrivate &other,
                                   DescribeSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotsRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
