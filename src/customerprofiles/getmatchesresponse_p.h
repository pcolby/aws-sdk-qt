// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMATCHESRESPONSE_P_H
#define QTAWS_GETMATCHESRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class GetMatchesResponse;

class GetMatchesResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit GetMatchesResponsePrivate(GetMatchesResponse * const q);

    void parseGetMatchesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMatchesResponse)
    Q_DISABLE_COPY(GetMatchesResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
