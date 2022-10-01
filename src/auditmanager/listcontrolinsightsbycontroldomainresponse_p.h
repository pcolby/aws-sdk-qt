// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLINSIGHTSBYCONTROLDOMAINRESPONSE_P_H
#define QTAWS_LISTCONTROLINSIGHTSBYCONTROLDOMAINRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class ListControlInsightsByControlDomainResponse;

class ListControlInsightsByControlDomainResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit ListControlInsightsByControlDomainResponsePrivate(ListControlInsightsByControlDomainResponse * const q);

    void parseListControlInsightsByControlDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListControlInsightsByControlDomainResponse)
    Q_DISABLE_COPY(ListControlInsightsByControlDomainResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
