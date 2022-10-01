// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHADDRESSBOOKSRESPONSE_P_H
#define QTAWS_SEARCHADDRESSBOOKSRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchAddressBooksResponse;

class SearchAddressBooksResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit SearchAddressBooksResponsePrivate(SearchAddressBooksResponse * const q);

    void parseSearchAddressBooksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchAddressBooksResponse)
    Q_DISABLE_COPY(SearchAddressBooksResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
