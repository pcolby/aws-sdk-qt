// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLINSIGHTSBYCONTROLDOMAINREQUEST_P_H
#define QTAWS_LISTCONTROLINSIGHTSBYCONTROLDOMAINREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "listcontrolinsightsbycontroldomainrequest.h"

namespace QtAws {
namespace AuditManager {

class ListControlInsightsByControlDomainRequest;

class ListControlInsightsByControlDomainRequestPrivate : public AuditManagerRequestPrivate {

public:
    ListControlInsightsByControlDomainRequestPrivate(const AuditManagerRequest::Action action,
                                   ListControlInsightsByControlDomainRequest * const q);
    ListControlInsightsByControlDomainRequestPrivate(const ListControlInsightsByControlDomainRequestPrivate &other,
                                   ListControlInsightsByControlDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListControlInsightsByControlDomainRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
