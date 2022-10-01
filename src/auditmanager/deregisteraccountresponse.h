// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERACCOUNTRESPONSE_H
#define QTAWS_DEREGISTERACCOUNTRESPONSE_H

#include "auditmanagerresponse.h"
#include "deregisteraccountrequest.h"

namespace QtAws {
namespace AuditManager {

class DeregisterAccountResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT DeregisterAccountResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    DeregisterAccountResponse(const DeregisterAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterAccountResponse)
    Q_DISABLE_COPY(DeregisterAccountResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
