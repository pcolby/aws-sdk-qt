// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESNAPSHOTCOPYREQUEST_P_H
#define QTAWS_DISABLESNAPSHOTCOPYREQUEST_P_H

#include "redshiftrequest_p.h"
#include "disablesnapshotcopyrequest.h"

namespace QtAws {
namespace Redshift {

class DisableSnapshotCopyRequest;

class DisableSnapshotCopyRequestPrivate : public RedshiftRequestPrivate {

public:
    DisableSnapshotCopyRequestPrivate(const RedshiftRequest::Action action,
                                   DisableSnapshotCopyRequest * const q);
    DisableSnapshotCopyRequestPrivate(const DisableSnapshotCopyRequestPrivate &other,
                                   DisableSnapshotCopyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableSnapshotCopyRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
