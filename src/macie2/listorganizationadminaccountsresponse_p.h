// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONADMINACCOUNTSRESPONSE_P_H
#define QTAWS_LISTORGANIZATIONADMINACCOUNTSRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class ListOrganizationAdminAccountsResponse;

class ListOrganizationAdminAccountsResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit ListOrganizationAdminAccountsResponsePrivate(ListOrganizationAdminAccountsResponse * const q);

    void parseListOrganizationAdminAccountsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOrganizationAdminAccountsResponse)
    Q_DISABLE_COPY(ListOrganizationAdminAccountsResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
