// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELEGATEDADMINACCOUNTSRESPONSE_P_H
#define QTAWS_LISTDELEGATEDADMINACCOUNTSRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class ListDelegatedAdminAccountsResponse;

class ListDelegatedAdminAccountsResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit ListDelegatedAdminAccountsResponsePrivate(ListDelegatedAdminAccountsResponse * const q);

    void parseListDelegatedAdminAccountsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDelegatedAdminAccountsResponse)
    Q_DISABLE_COPY(ListDelegatedAdminAccountsResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
