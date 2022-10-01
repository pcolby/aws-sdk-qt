// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBSNAPSHOTREQUEST_P_H
#define QTAWS_MODIFYDBSNAPSHOTREQUEST_P_H

#include "rdsrequest_p.h"
#include "modifydbsnapshotrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBSnapshotRequest;

class ModifyDBSnapshotRequestPrivate : public RdsRequestPrivate {

public:
    ModifyDBSnapshotRequestPrivate(const RdsRequest::Action action,
                                   ModifyDBSnapshotRequest * const q);
    ModifyDBSnapshotRequestPrivate(const ModifyDBSnapshotRequestPrivate &other,
                                   ModifyDBSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBSnapshotRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
