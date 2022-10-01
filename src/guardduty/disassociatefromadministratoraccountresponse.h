// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFROMADMINISTRATORACCOUNTRESPONSE_H
#define QTAWS_DISASSOCIATEFROMADMINISTRATORACCOUNTRESPONSE_H

#include "guarddutyresponse.h"
#include "disassociatefromadministratoraccountrequest.h"

namespace QtAws {
namespace GuardDuty {

class DisassociateFromAdministratorAccountResponsePrivate;

class QTAWSGUARDDUTY_EXPORT DisassociateFromAdministratorAccountResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    DisassociateFromAdministratorAccountResponse(const DisassociateFromAdministratorAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateFromAdministratorAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateFromAdministratorAccountResponse)
    Q_DISABLE_COPY(DisassociateFromAdministratorAccountResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
