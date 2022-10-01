// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPREFETCHSCHEDULERESPONSE_P_H
#define QTAWS_GETPREFETCHSCHEDULERESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class GetPrefetchScheduleResponse;

class GetPrefetchScheduleResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit GetPrefetchScheduleResponsePrivate(GetPrefetchScheduleResponse * const q);

    void parseGetPrefetchScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPrefetchScheduleResponse)
    Q_DISABLE_COPY(GetPrefetchScheduleResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
