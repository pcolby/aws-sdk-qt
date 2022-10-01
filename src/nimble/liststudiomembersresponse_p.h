// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOMEMBERSRESPONSE_P_H
#define QTAWS_LISTSTUDIOMEMBERSRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class ListStudioMembersResponse;

class ListStudioMembersResponsePrivate : public NimbleResponsePrivate {

public:

    explicit ListStudioMembersResponsePrivate(ListStudioMembersResponse * const q);

    void parseListStudioMembersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStudioMembersResponse)
    Q_DISABLE_COPY(ListStudioMembersResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
