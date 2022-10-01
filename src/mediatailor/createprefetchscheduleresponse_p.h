// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPREFETCHSCHEDULERESPONSE_P_H
#define QTAWS_CREATEPREFETCHSCHEDULERESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class CreatePrefetchScheduleResponse;

class CreatePrefetchScheduleResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit CreatePrefetchScheduleResponsePrivate(CreatePrefetchScheduleResponse * const q);

    void parseCreatePrefetchScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePrefetchScheduleResponse)
    Q_DISABLE_COPY(CreatePrefetchScheduleResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
