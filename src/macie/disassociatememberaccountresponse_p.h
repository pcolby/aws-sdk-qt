// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERACCOUNTRESPONSE_P_H
#define QTAWS_DISASSOCIATEMEMBERACCOUNTRESPONSE_P_H

#include "macieresponse_p.h"

namespace QtAws {
namespace Macie {

class DisassociateMemberAccountResponse;

class DisassociateMemberAccountResponsePrivate : public MacieResponsePrivate {

public:

    explicit DisassociateMemberAccountResponsePrivate(DisassociateMemberAccountResponse * const q);

    void parseDisassociateMemberAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateMemberAccountResponse)
    Q_DISABLE_COPY(DisassociateMemberAccountResponsePrivate)

};

} // namespace Macie
} // namespace QtAws

#endif
