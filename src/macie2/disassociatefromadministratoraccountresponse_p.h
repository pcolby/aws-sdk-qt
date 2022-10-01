// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFROMADMINISTRATORACCOUNTRESPONSE_P_H
#define QTAWS_DISASSOCIATEFROMADMINISTRATORACCOUNTRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class DisassociateFromAdministratorAccountResponse;

class DisassociateFromAdministratorAccountResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit DisassociateFromAdministratorAccountResponsePrivate(DisassociateFromAdministratorAccountResponse * const q);

    void parseDisassociateFromAdministratorAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateFromAdministratorAccountResponse)
    Q_DISABLE_COPY(DisassociateFromAdministratorAccountResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
