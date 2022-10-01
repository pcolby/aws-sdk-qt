// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLDOMAININSIGHTSREQUEST_P_H
#define QTAWS_LISTCONTROLDOMAININSIGHTSREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "listcontroldomaininsightsrequest.h"

namespace QtAws {
namespace AuditManager {

class ListControlDomainInsightsRequest;

class ListControlDomainInsightsRequestPrivate : public AuditManagerRequestPrivate {

public:
    ListControlDomainInsightsRequestPrivate(const AuditManagerRequest::Action action,
                                   ListControlDomainInsightsRequest * const q);
    ListControlDomainInsightsRequestPrivate(const ListControlDomainInsightsRequestPrivate &other,
                                   ListControlDomainInsightsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListControlDomainInsightsRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
