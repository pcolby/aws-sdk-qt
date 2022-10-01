// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSREQUEST_P_H
#define QTAWS_DESCRIBESNAPSHOTSREQUEST_P_H

#include "fsxrequest_p.h"
#include "describesnapshotsrequest.h"

namespace QtAws {
namespace FSx {

class DescribeSnapshotsRequest;

class DescribeSnapshotsRequestPrivate : public FSxRequestPrivate {

public:
    DescribeSnapshotsRequestPrivate(const FSxRequest::Action action,
                                   DescribeSnapshotsRequest * const q);
    DescribeSnapshotsRequestPrivate(const DescribeSnapshotsRequestPrivate &other,
                                   DescribeSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotsRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
