// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFROMMASTERACCOUNTRESPONSE_P_H
#define QTAWS_DISASSOCIATEFROMMASTERACCOUNTRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class DisassociateFromMasterAccountResponse;

class DisassociateFromMasterAccountResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit DisassociateFromMasterAccountResponsePrivate(DisassociateFromMasterAccountResponse * const q);

    void parseDisassociateFromMasterAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateFromMasterAccountResponse)
    Q_DISABLE_COPY(DisassociateFromMasterAccountResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
