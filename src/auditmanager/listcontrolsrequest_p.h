// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLSREQUEST_P_H
#define QTAWS_LISTCONTROLSREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "listcontrolsrequest.h"

namespace QtAws {
namespace AuditManager {

class ListControlsRequest;

class ListControlsRequestPrivate : public AuditManagerRequestPrivate {

public:
    ListControlsRequestPrivate(const AuditManagerRequest::Action action,
                                   ListControlsRequest * const q);
    ListControlsRequestPrivate(const ListControlsRequestPrivate &other,
                                   ListControlsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListControlsRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
