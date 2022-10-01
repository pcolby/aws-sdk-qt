// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMEMBERACCOUNTRESPONSE_P_H
#define QTAWS_ASSOCIATEMEMBERACCOUNTRESPONSE_P_H

#include "macieresponse_p.h"

namespace QtAws {
namespace Macie {

class AssociateMemberAccountResponse;

class AssociateMemberAccountResponsePrivate : public MacieResponsePrivate {

public:

    explicit AssociateMemberAccountResponsePrivate(AssociateMemberAccountResponse * const q);

    void parseAssociateMemberAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateMemberAccountResponse)
    Q_DISABLE_COPY(AssociateMemberAccountResponsePrivate)

};

} // namespace Macie
} // namespace QtAws

#endif
