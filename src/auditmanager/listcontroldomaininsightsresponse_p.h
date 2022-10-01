// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLDOMAININSIGHTSRESPONSE_P_H
#define QTAWS_LISTCONTROLDOMAININSIGHTSRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class ListControlDomainInsightsResponse;

class ListControlDomainInsightsResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit ListControlDomainInsightsResponsePrivate(ListControlDomainInsightsResponse * const q);

    void parseListControlDomainInsightsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListControlDomainInsightsResponse)
    Q_DISABLE_COPY(ListControlDomainInsightsResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
