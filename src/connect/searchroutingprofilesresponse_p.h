// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHROUTINGPROFILESRESPONSE_P_H
#define QTAWS_SEARCHROUTINGPROFILESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class SearchRoutingProfilesResponse;

class SearchRoutingProfilesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit SearchRoutingProfilesResponsePrivate(SearchRoutingProfilesResponse * const q);

    void parseSearchRoutingProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchRoutingProfilesResponse)
    Q_DISABLE_COPY(SearchRoutingProfilesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
