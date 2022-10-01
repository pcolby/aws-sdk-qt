// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSRESPONSE_P_H
#define QTAWS_LISTACCOUNTSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListAccountsResponse;

class ListAccountsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListAccountsResponsePrivate(ListAccountsResponse * const q);

    void parseListAccountsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccountsResponse)
    Q_DISABLE_COPY(ListAccountsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
