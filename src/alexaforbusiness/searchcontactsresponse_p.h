// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHCONTACTSRESPONSE_P_H
#define QTAWS_SEARCHCONTACTSRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchContactsResponse;

class SearchContactsResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit SearchContactsResponsePrivate(SearchContactsResponse * const q);

    void parseSearchContactsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchContactsResponse)
    Q_DISABLE_COPY(SearchContactsResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
