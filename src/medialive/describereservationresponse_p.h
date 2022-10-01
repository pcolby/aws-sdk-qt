// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVATIONRESPONSE_P_H
#define QTAWS_DESCRIBERESERVATIONRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class DescribeReservationResponse;

class DescribeReservationResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit DescribeReservationResponsePrivate(DescribeReservationResponse * const q);

    void parseDescribeReservationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReservationResponse)
    Q_DISABLE_COPY(DescribeReservationResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
