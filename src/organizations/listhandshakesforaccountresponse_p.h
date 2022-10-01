// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHANDSHAKESFORACCOUNTRESPONSE_P_H
#define QTAWS_LISTHANDSHAKESFORACCOUNTRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class ListHandshakesForAccountResponse;

class ListHandshakesForAccountResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit ListHandshakesForAccountResponsePrivate(ListHandshakesForAccountResponse * const q);

    void parseListHandshakesForAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHandshakesForAccountResponse)
    Q_DISABLE_COPY(ListHandshakesForAccountResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
