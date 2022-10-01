// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSRESPONSE_P_H
#define QTAWS_LISTUSERSRESPONSE_P_H

#include "mqresponse_p.h"

namespace QtAws {
namespace Mq {

class ListUsersResponse;

class ListUsersResponsePrivate : public MqResponsePrivate {

public:

    explicit ListUsersResponsePrivate(ListUsersResponse * const q);

    void parseListUsersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUsersResponse)
    Q_DISABLE_COPY(ListUsersResponsePrivate)

};

} // namespace Mq
} // namespace QtAws

#endif
