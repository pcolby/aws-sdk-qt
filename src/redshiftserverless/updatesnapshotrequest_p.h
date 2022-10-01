// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESNAPSHOTREQUEST_P_H
#define QTAWS_UPDATESNAPSHOTREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "updatesnapshotrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class UpdateSnapshotRequest;

class UpdateSnapshotRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    UpdateSnapshotRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   UpdateSnapshotRequest * const q);
    UpdateSnapshotRequestPrivate(const UpdateSnapshotRequestPrivate &other,
                                   UpdateSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSnapshotRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
