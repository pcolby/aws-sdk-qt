// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESERVATIONRESPONSE_P_H
#define QTAWS_UPDATERESERVATIONRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class UpdateReservationResponse;

class UpdateReservationResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit UpdateReservationResponsePrivate(UpdateReservationResponse * const q);

    void parseUpdateReservationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateReservationResponse)
    Q_DISABLE_COPY(UpdateReservationResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
