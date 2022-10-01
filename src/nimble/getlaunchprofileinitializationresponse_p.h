// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHPROFILEINITIALIZATIONRESPONSE_P_H
#define QTAWS_GETLAUNCHPROFILEINITIALIZATIONRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class GetLaunchProfileInitializationResponse;

class GetLaunchProfileInitializationResponsePrivate : public NimbleResponsePrivate {

public:

    explicit GetLaunchProfileInitializationResponsePrivate(GetLaunchProfileInitializationResponse * const q);

    void parseGetLaunchProfileInitializationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLaunchProfileInitializationResponse)
    Q_DISABLE_COPY(GetLaunchProfileInitializationResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
