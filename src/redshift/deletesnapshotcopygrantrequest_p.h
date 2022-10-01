// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTCOPYGRANTREQUEST_P_H
#define QTAWS_DELETESNAPSHOTCOPYGRANTREQUEST_P_H

#include "redshiftrequest_p.h"
#include "deletesnapshotcopygrantrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteSnapshotCopyGrantRequest;

class DeleteSnapshotCopyGrantRequestPrivate : public RedshiftRequestPrivate {

public:
    DeleteSnapshotCopyGrantRequestPrivate(const RedshiftRequest::Action action,
                                   DeleteSnapshotCopyGrantRequest * const q);
    DeleteSnapshotCopyGrantRequestPrivate(const DeleteSnapshotCopyGrantRequestPrivate &other,
                                   DeleteSnapshotCopyGrantRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSnapshotCopyGrantRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
