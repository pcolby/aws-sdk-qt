// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLDOMAININSIGHTSRESPONSE_H
#define QTAWS_LISTCONTROLDOMAININSIGHTSRESPONSE_H

#include "auditmanagerresponse.h"
#include "listcontroldomaininsightsrequest.h"

namespace QtAws {
namespace AuditManager {

class ListControlDomainInsightsResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT ListControlDomainInsightsResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    ListControlDomainInsightsResponse(const ListControlDomainInsightsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListControlDomainInsightsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListControlDomainInsightsResponse)
    Q_DISABLE_COPY(ListControlDomainInsightsResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
