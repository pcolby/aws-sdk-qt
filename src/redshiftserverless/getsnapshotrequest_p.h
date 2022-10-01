// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTREQUEST_P_H
#define QTAWS_GETSNAPSHOTREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "getsnapshotrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetSnapshotRequest;

class GetSnapshotRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    GetSnapshotRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   GetSnapshotRequest * const q);
    GetSnapshotRequestPrivate(const GetSnapshotRequestPrivate &other,
                                   GetSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSnapshotRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
