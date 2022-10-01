// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLINSIGHTSBYCONTROLDOMAINRESPONSE_H
#define QTAWS_LISTCONTROLINSIGHTSBYCONTROLDOMAINRESPONSE_H

#include "auditmanagerresponse.h"
#include "listcontrolinsightsbycontroldomainrequest.h"

namespace QtAws {
namespace AuditManager {

class ListControlInsightsByControlDomainResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT ListControlInsightsByControlDomainResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    ListControlInsightsByControlDomainResponse(const ListControlInsightsByControlDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListControlInsightsByControlDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListControlInsightsByControlDomainResponse)
    Q_DISABLE_COPY(ListControlInsightsByControlDomainResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
