// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEMBERSRESPONSE_P_H
#define QTAWS_LISTMEMBERSRESPONSE_P_H

#include "detectiveresponse_p.h"

namespace QtAws {
namespace Detective {

class ListMembersResponse;

class ListMembersResponsePrivate : public DetectiveResponsePrivate {

public:

    explicit ListMembersResponsePrivate(ListMembersResponse * const q);

    void parseListMembersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMembersResponse)
    Q_DISABLE_COPY(ListMembersResponsePrivate)

};

} // namespace Detective
} // namespace QtAws

#endif
