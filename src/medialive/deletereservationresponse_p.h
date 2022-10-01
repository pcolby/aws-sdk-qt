// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESERVATIONRESPONSE_P_H
#define QTAWS_DELETERESERVATIONRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class DeleteReservationResponse;

class DeleteReservationResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit DeleteReservationResponsePrivate(DeleteReservationResponse * const q);

    void parseDeleteReservationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReservationResponse)
    Q_DISABLE_COPY(DeleteReservationResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
