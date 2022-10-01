// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEUSERSRESPONSE_P_H
#define QTAWS_LISTAPPINSTANCEUSERSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListAppInstanceUsersResponse;

class ListAppInstanceUsersResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListAppInstanceUsersResponsePrivate(ListAppInstanceUsersResponse * const q);

    void parseListAppInstanceUsersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppInstanceUsersResponse)
    Q_DISABLE_COPY(ListAppInstanceUsersResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
