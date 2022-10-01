// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESERVICEROLEFROMACCOUNTRESPONSE_P_H
#define QTAWS_DISASSOCIATESERVICEROLEFROMACCOUNTRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class DisassociateServiceRoleFromAccountResponse;

class DisassociateServiceRoleFromAccountResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit DisassociateServiceRoleFromAccountResponsePrivate(DisassociateServiceRoleFromAccountResponse * const q);

    void parseDisassociateServiceRoleFromAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateServiceRoleFromAccountResponse)
    Q_DISABLE_COPY(DisassociateServiceRoleFromAccountResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
