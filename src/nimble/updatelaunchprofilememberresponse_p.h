// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHPROFILEMEMBERRESPONSE_P_H
#define QTAWS_UPDATELAUNCHPROFILEMEMBERRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class UpdateLaunchProfileMemberResponse;

class UpdateLaunchProfileMemberResponsePrivate : public NimbleResponsePrivate {

public:

    explicit UpdateLaunchProfileMemberResponsePrivate(UpdateLaunchProfileMemberResponse * const q);

    void parseUpdateLaunchProfileMemberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLaunchProfileMemberResponse)
    Q_DISABLE_COPY(UpdateLaunchProfileMemberResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
