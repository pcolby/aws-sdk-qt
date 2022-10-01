// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHPROFILEDETAILSRESPONSE_P_H
#define QTAWS_GETLAUNCHPROFILEDETAILSRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class GetLaunchProfileDetailsResponse;

class GetLaunchProfileDetailsResponsePrivate : public NimbleResponsePrivate {

public:

    explicit GetLaunchProfileDetailsResponsePrivate(GetLaunchProfileDetailsResponse * const q);

    void parseGetLaunchProfileDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLaunchProfileDetailsResponse)
    Q_DISABLE_COPY(GetLaunchProfileDetailsResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
