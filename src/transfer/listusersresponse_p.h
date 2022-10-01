// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSRESPONSE_P_H
#define QTAWS_LISTUSERSRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class ListUsersResponse;

class ListUsersResponsePrivate : public TransferResponsePrivate {

public:

    explicit ListUsersResponsePrivate(ListUsersResponse * const q);

    void parseListUsersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUsersResponse)
    Q_DISABLE_COPY(ListUsersResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
