// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESERVICEROLEFROMACCOUNTRESPONSE_P_H
#define QTAWS_DISASSOCIATESERVICEROLEFROMACCOUNTRESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class DisassociateServiceRoleFromAccountResponse;

class DisassociateServiceRoleFromAccountResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit DisassociateServiceRoleFromAccountResponsePrivate(DisassociateServiceRoleFromAccountResponse * const q);

    void parseDisassociateServiceRoleFromAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateServiceRoleFromAccountResponse)
    Q_DISABLE_COPY(DisassociateServiceRoleFromAccountResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
