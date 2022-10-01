// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBSNAPSHOTATTRIBUTEREQUEST_P_H
#define QTAWS_MODIFYDBSNAPSHOTATTRIBUTEREQUEST_P_H

#include "rdsrequest_p.h"
#include "modifydbsnapshotattributerequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBSnapshotAttributeRequest;

class ModifyDBSnapshotAttributeRequestPrivate : public RdsRequestPrivate {

public:
    ModifyDBSnapshotAttributeRequestPrivate(const RdsRequest::Action action,
                                   ModifyDBSnapshotAttributeRequest * const q);
    ModifyDBSnapshotAttributeRequestPrivate(const ModifyDBSnapshotAttributeRequestPrivate &other,
                                   ModifyDBSnapshotAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBSnapshotAttributeRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
