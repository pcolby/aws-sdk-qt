// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEADMINACCOUNTRESPONSE_P_H
#define QTAWS_DISASSOCIATEADMINACCOUNTRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class DisassociateAdminAccountResponse;

class DisassociateAdminAccountResponsePrivate : public FmsResponsePrivate {

public:

    explicit DisassociateAdminAccountResponsePrivate(DisassociateAdminAccountResponse * const q);

    void parseDisassociateAdminAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateAdminAccountResponse)
    Q_DISABLE_COPY(DisassociateAdminAccountResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
