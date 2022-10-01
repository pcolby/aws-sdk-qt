// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHPROFILERESPONSE_P_H
#define QTAWS_GETLAUNCHPROFILERESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class GetLaunchProfileResponse;

class GetLaunchProfileResponsePrivate : public NimbleResponsePrivate {

public:

    explicit GetLaunchProfileResponsePrivate(GetLaunchProfileResponse * const q);

    void parseGetLaunchProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLaunchProfileResponse)
    Q_DISABLE_COPY(GetLaunchProfileResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
