// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBSNAPSHOTREQUEST_P_H
#define QTAWS_CREATEDBSNAPSHOTREQUEST_P_H

#include "rdsrequest_p.h"
#include "createdbsnapshotrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBSnapshotRequest;

class CreateDBSnapshotRequestPrivate : public RdsRequestPrivate {

public:
    CreateDBSnapshotRequestPrivate(const RdsRequest::Action action,
                                   CreateDBSnapshotRequest * const q);
    CreateDBSnapshotRequestPrivate(const CreateDBSnapshotRequestPrivate &other,
                                   CreateDBSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDBSnapshotRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
