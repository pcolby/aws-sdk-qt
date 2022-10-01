// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEMBERSRESPONSE_P_H
#define QTAWS_GETMEMBERSRESPONSE_P_H

#include "detectiveresponse_p.h"

namespace QtAws {
namespace Detective {

class GetMembersResponse;

class GetMembersResponsePrivate : public DetectiveResponsePrivate {

public:

    explicit GetMembersResponsePrivate(GetMembersResponse * const q);

    void parseGetMembersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMembersResponse)
    Q_DISABLE_COPY(GetMembersResponsePrivate)

};

} // namespace Detective
} // namespace QtAws

#endif
