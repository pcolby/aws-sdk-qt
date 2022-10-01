// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHPROFILERESPONSE_P_H
#define QTAWS_UPDATELAUNCHPROFILERESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class UpdateLaunchProfileResponse;

class UpdateLaunchProfileResponsePrivate : public NimbleResponsePrivate {

public:

    explicit UpdateLaunchProfileResponsePrivate(UpdateLaunchProfileResponse * const q);

    void parseUpdateLaunchProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLaunchProfileResponse)
    Q_DISABLE_COPY(UpdateLaunchProfileResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
