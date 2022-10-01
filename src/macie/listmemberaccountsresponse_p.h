// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEMBERACCOUNTSRESPONSE_P_H
#define QTAWS_LISTMEMBERACCOUNTSRESPONSE_P_H

#include "macieresponse_p.h"

namespace QtAws {
namespace Macie {

class ListMemberAccountsResponse;

class ListMemberAccountsResponsePrivate : public MacieResponsePrivate {

public:

    explicit ListMemberAccountsResponsePrivate(ListMemberAccountsResponse * const q);

    void parseListMemberAccountsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMemberAccountsResponse)
    Q_DISABLE_COPY(ListMemberAccountsResponsePrivate)

};

} // namespace Macie
} // namespace QtAws

#endif
