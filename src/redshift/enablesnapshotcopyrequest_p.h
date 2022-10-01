// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESNAPSHOTCOPYREQUEST_P_H
#define QTAWS_ENABLESNAPSHOTCOPYREQUEST_P_H

#include "redshiftrequest_p.h"
#include "enablesnapshotcopyrequest.h"

namespace QtAws {
namespace Redshift {

class EnableSnapshotCopyRequest;

class EnableSnapshotCopyRequestPrivate : public RedshiftRequestPrivate {

public:
    EnableSnapshotCopyRequestPrivate(const RedshiftRequest::Action action,
                                   EnableSnapshotCopyRequest * const q);
    EnableSnapshotCopyRequestPrivate(const EnableSnapshotCopyRequestPrivate &other,
                                   EnableSnapshotCopyRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableSnapshotCopyRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
