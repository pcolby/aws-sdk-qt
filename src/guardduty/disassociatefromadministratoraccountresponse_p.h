// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFROMADMINISTRATORACCOUNTRESPONSE_P_H
#define QTAWS_DISASSOCIATEFROMADMINISTRATORACCOUNTRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class DisassociateFromAdministratorAccountResponse;

class DisassociateFromAdministratorAccountResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit DisassociateFromAdministratorAccountResponsePrivate(DisassociateFromAdministratorAccountResponse * const q);

    void parseDisassociateFromAdministratorAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateFromAdministratorAccountResponse)
    Q_DISABLE_COPY(DisassociateFromAdministratorAccountResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
