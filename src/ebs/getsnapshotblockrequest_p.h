// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTBLOCKREQUEST_P_H
#define QTAWS_GETSNAPSHOTBLOCKREQUEST_P_H

#include "ebsrequest_p.h"
#include "getsnapshotblockrequest.h"

namespace QtAws {
namespace Ebs {

class GetSnapshotBlockRequest;

class GetSnapshotBlockRequestPrivate : public EbsRequestPrivate {

public:
    GetSnapshotBlockRequestPrivate(const EbsRequest::Action action,
                                   GetSnapshotBlockRequest * const q);
    GetSnapshotBlockRequestPrivate(const GetSnapshotBlockRequestPrivate &other,
                                   GetSnapshotBlockRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSnapshotBlockRequest)

};

} // namespace Ebs
} // namespace QtAws

#endif
