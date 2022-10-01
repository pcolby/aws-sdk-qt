// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREFROMSNAPSHOTREQUEST_P_H
#define QTAWS_RESTOREFROMSNAPSHOTREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "restorefromsnapshotrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class RestoreFromSnapshotRequest;

class RestoreFromSnapshotRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    RestoreFromSnapshotRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   RestoreFromSnapshotRequest * const q);
    RestoreFromSnapshotRequestPrivate(const RestoreFromSnapshotRequestPrivate &other,
                                   RestoreFromSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreFromSnapshotRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
