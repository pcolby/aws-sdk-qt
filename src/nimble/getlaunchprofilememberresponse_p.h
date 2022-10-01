// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHPROFILEMEMBERRESPONSE_P_H
#define QTAWS_GETLAUNCHPROFILEMEMBERRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class GetLaunchProfileMemberResponse;

class GetLaunchProfileMemberResponsePrivate : public NimbleResponsePrivate {

public:

    explicit GetLaunchProfileMemberResponsePrivate(GetLaunchProfileMemberResponse * const q);

    void parseGetLaunchProfileMemberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLaunchProfileMemberResponse)
    Q_DISABLE_COPY(GetLaunchProfileMemberResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
