// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSNAPSHOTBLOCKREQUEST_P_H
#define QTAWS_PUTSNAPSHOTBLOCKREQUEST_P_H

#include "ebsrequest_p.h"
#include "putsnapshotblockrequest.h"

namespace QtAws {
namespace Ebs {

class PutSnapshotBlockRequest;

class PutSnapshotBlockRequestPrivate : public EbsRequestPrivate {

public:
    PutSnapshotBlockRequestPrivate(const EbsRequest::Action action,
                                   PutSnapshotBlockRequest * const q);
    PutSnapshotBlockRequestPrivate(const PutSnapshotBlockRequestPrivate &other,
                                   PutSnapshotBlockRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutSnapshotBlockRequest)

};

} // namespace Ebs
} // namespace QtAws

#endif
