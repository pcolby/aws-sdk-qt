// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSTATUSRESPONSE_H
#define QTAWS_GETACCOUNTSTATUSRESPONSE_H

#include "auditmanagerresponse.h"
#include "getaccountstatusrequest.h"

namespace QtAws {
namespace AuditManager {

class GetAccountStatusResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT GetAccountStatusResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    GetAccountStatusResponse(const GetAccountStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccountStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountStatusResponse)
    Q_DISABLE_COPY(GetAccountStatusResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
