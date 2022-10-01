// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERSNAPSHOTATTRIBUTEREQUEST_P_H
#define QTAWS_MODIFYDBCLUSTERSNAPSHOTATTRIBUTEREQUEST_P_H

#include "neptunerequest_p.h"
#include "modifydbclustersnapshotattributerequest.h"

namespace QtAws {
namespace Neptune {

class ModifyDBClusterSnapshotAttributeRequest;

class ModifyDBClusterSnapshotAttributeRequestPrivate : public NeptuneRequestPrivate {

public:
    ModifyDBClusterSnapshotAttributeRequestPrivate(const NeptuneRequest::Action action,
                                   ModifyDBClusterSnapshotAttributeRequest * const q);
    ModifyDBClusterSnapshotAttributeRequestPrivate(const ModifyDBClusterSnapshotAttributeRequestPrivate &other,
                                   ModifyDBClusterSnapshotAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBClusterSnapshotAttributeRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
