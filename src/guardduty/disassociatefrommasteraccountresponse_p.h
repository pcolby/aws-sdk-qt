// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFROMMASTERACCOUNTRESPONSE_P_H
#define QTAWS_DISASSOCIATEFROMMASTERACCOUNTRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class DisassociateFromMasterAccountResponse;

class DisassociateFromMasterAccountResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit DisassociateFromMasterAccountResponsePrivate(DisassociateFromMasterAccountResponse * const q);

    void parseDisassociateFromMasterAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateFromMasterAccountResponse)
    Q_DISABLE_COPY(DisassociateFromMasterAccountResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
