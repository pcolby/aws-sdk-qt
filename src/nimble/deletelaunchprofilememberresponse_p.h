// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHPROFILEMEMBERRESPONSE_P_H
#define QTAWS_DELETELAUNCHPROFILEMEMBERRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class DeleteLaunchProfileMemberResponse;

class DeleteLaunchProfileMemberResponsePrivate : public NimbleResponsePrivate {

public:

    explicit DeleteLaunchProfileMemberResponsePrivate(DeleteLaunchProfileMemberResponse * const q);

    void parseDeleteLaunchProfileMemberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLaunchProfileMemberResponse)
    Q_DISABLE_COPY(DeleteLaunchProfileMemberResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
