// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSRESPONSE_P_H
#define QTAWS_LISTACCOUNTSRESPONSE_P_H

#include "ssoresponse_p.h"

namespace QtAws {
namespace Sso {

class ListAccountsResponse;

class ListAccountsResponsePrivate : public SsoResponsePrivate {

public:

    explicit ListAccountsResponsePrivate(ListAccountsResponse * const q);

    void parseListAccountsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccountsResponse)
    Q_DISABLE_COPY(ListAccountsResponsePrivate)

};

} // namespace Sso
} // namespace QtAws

#endif
