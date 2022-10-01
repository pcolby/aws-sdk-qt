// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICESINSCOPERESPONSE_H
#define QTAWS_GETSERVICESINSCOPERESPONSE_H

#include "auditmanagerresponse.h"
#include "getservicesinscoperequest.h"

namespace QtAws {
namespace AuditManager {

class GetServicesInScopeResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT GetServicesInScopeResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    GetServicesInScopeResponse(const GetServicesInScopeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServicesInScopeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServicesInScopeResponse)
    Q_DISABLE_COPY(GetServicesInScopeResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
