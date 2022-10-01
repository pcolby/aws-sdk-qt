// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELSCHEDULERESPONSE_P_H
#define QTAWS_GETCHANNELSCHEDULERESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class GetChannelScheduleResponse;

class GetChannelScheduleResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit GetChannelScheduleResponsePrivate(GetChannelScheduleResponse * const q);

    void parseGetChannelScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetChannelScheduleResponse)
    Q_DISABLE_COPY(GetChannelScheduleResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
