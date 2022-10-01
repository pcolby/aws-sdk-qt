// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAUNCHPROFILEMEMBERSRESPONSE_P_H
#define QTAWS_LISTLAUNCHPROFILEMEMBERSRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class ListLaunchProfileMembersResponse;

class ListLaunchProfileMembersResponsePrivate : public NimbleResponsePrivate {

public:

    explicit ListLaunchProfileMembersResponsePrivate(ListLaunchProfileMembersResponse * const q);

    void parseListLaunchProfileMembersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLaunchProfileMembersResponse)
    Q_DISABLE_COPY(ListLaunchProfileMembersResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
