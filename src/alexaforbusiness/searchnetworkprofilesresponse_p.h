// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHNETWORKPROFILESRESPONSE_P_H
#define QTAWS_SEARCHNETWORKPROFILESRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchNetworkProfilesResponse;

class SearchNetworkProfilesResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit SearchNetworkProfilesResponsePrivate(SearchNetworkProfilesResponse * const q);

    void parseSearchNetworkProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchNetworkProfilesResponse)
    Q_DISABLE_COPY(SearchNetworkProfilesResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
