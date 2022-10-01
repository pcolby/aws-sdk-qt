// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSFORPARENTRESPONSE_P_H
#define QTAWS_LISTACCOUNTSFORPARENTRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class ListAccountsForParentResponse;

class ListAccountsForParentResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit ListAccountsForParentResponsePrivate(ListAccountsForParentResponse * const q);

    void parseListAccountsForParentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccountsForParentResponse)
    Q_DISABLE_COPY(ListAccountsForParentResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
