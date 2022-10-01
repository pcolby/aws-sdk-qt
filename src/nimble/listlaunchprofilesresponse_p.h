// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAUNCHPROFILESRESPONSE_P_H
#define QTAWS_LISTLAUNCHPROFILESRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class ListLaunchProfilesResponse;

class ListLaunchProfilesResponsePrivate : public NimbleResponsePrivate {

public:

    explicit ListLaunchProfilesResponsePrivate(ListLaunchProfilesResponse * const q);

    void parseListLaunchProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLaunchProfilesResponse)
    Q_DISABLE_COPY(ListLaunchProfilesResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
