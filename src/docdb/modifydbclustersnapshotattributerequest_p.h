// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERSNAPSHOTATTRIBUTEREQUEST_P_H
#define QTAWS_MODIFYDBCLUSTERSNAPSHOTATTRIBUTEREQUEST_P_H

#include "docdbrequest_p.h"
#include "modifydbclustersnapshotattributerequest.h"

namespace QtAws {
namespace DocDb {

class ModifyDBClusterSnapshotAttributeRequest;

class ModifyDBClusterSnapshotAttributeRequestPrivate : public DocDbRequestPrivate {

public:
    ModifyDBClusterSnapshotAttributeRequestPrivate(const DocDbRequest::Action action,
                                   ModifyDBClusterSnapshotAttributeRequest * const q);
    ModifyDBClusterSnapshotAttributeRequestPrivate(const ModifyDBClusterSnapshotAttributeRequestPrivate &other,
                                   ModifyDBClusterSnapshotAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBClusterSnapshotAttributeRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
