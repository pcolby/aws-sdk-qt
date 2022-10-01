// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERACCOUNTRESPONSE_H
#define QTAWS_REGISTERACCOUNTRESPONSE_H

#include "auditmanagerresponse.h"
#include "registeraccountrequest.h"

namespace QtAws {
namespace AuditManager {

class RegisterAccountResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT RegisterAccountResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    RegisterAccountResponse(const RegisterAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterAccountResponse)
    Q_DISABLE_COPY(RegisterAccountResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
