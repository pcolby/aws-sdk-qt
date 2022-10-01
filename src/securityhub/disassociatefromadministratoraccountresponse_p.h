// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFROMADMINISTRATORACCOUNTRESPONSE_P_H
#define QTAWS_DISASSOCIATEFROMADMINISTRATORACCOUNTRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class DisassociateFromAdministratorAccountResponse;

class DisassociateFromAdministratorAccountResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit DisassociateFromAdministratorAccountResponsePrivate(DisassociateFromAdministratorAccountResponse * const q);

    void parseDisassociateFromAdministratorAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateFromAdministratorAccountResponse)
    Q_DISABLE_COPY(DisassociateFromAdministratorAccountResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
