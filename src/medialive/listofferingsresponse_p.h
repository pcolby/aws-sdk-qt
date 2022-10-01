// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOFFERINGSRESPONSE_P_H
#define QTAWS_LISTOFFERINGSRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class ListOfferingsResponse;

class ListOfferingsResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit ListOfferingsResponsePrivate(ListOfferingsResponse * const q);

    void parseListOfferingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOfferingsResponse)
    Q_DISABLE_COPY(ListOfferingsResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
