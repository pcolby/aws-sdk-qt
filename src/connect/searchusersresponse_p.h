// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHUSERSRESPONSE_P_H
#define QTAWS_SEARCHUSERSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class SearchUsersResponse;

class SearchUsersResponsePrivate : public ConnectResponsePrivate {

public:

    explicit SearchUsersResponsePrivate(SearchUsersResponse * const q);

    void parseSearchUsersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchUsersResponse)
    Q_DISABLE_COPY(SearchUsersResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
