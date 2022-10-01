// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHROOMSRESPONSE_P_H
#define QTAWS_SEARCHROOMSRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchRoomsResponse;

class SearchRoomsResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit SearchRoomsResponsePrivate(SearchRoomsResponse * const q);

    void parseSearchRoomsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchRoomsResponse)
    Q_DISABLE_COPY(SearchRoomsResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
