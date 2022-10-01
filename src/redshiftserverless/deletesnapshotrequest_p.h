// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTREQUEST_P_H
#define QTAWS_DELETESNAPSHOTREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "deletesnapshotrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class DeleteSnapshotRequest;

class DeleteSnapshotRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    DeleteSnapshotRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   DeleteSnapshotRequest * const q);
    DeleteSnapshotRequestPrivate(const DeleteSnapshotRequestPrivate &other,
                                   DeleteSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSnapshotRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
