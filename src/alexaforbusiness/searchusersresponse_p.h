// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHUSERSRESPONSE_P_H
#define QTAWS_SEARCHUSERSRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchUsersResponse;

class SearchUsersResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit SearchUsersResponsePrivate(SearchUsersResponse * const q);

    void parseSearchUsersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchUsersResponse)
    Q_DISABLE_COPY(SearchUsersResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
