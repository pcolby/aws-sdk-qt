// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESERVATIONSRESPONSE_P_H
#define QTAWS_LISTRESERVATIONSRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class ListReservationsResponse;

class ListReservationsResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit ListReservationsResponsePrivate(ListReservationsResponse * const q);

    void parseListReservationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReservationsResponse)
    Q_DISABLE_COPY(ListReservationsResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
