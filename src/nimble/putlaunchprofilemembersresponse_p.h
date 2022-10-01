// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLAUNCHPROFILEMEMBERSRESPONSE_P_H
#define QTAWS_PUTLAUNCHPROFILEMEMBERSRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class PutLaunchProfileMembersResponse;

class PutLaunchProfileMembersResponsePrivate : public NimbleResponsePrivate {

public:

    explicit PutLaunchProfileMembersResponsePrivate(PutLaunchProfileMembersResponse * const q);

    void parsePutLaunchProfileMembersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutLaunchProfileMembersResponse)
    Q_DISABLE_COPY(PutLaunchProfileMembersResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
