// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULERESPONSE_P_H
#define QTAWS_CREATESCHEDULERESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class CreateScheduleResponse;

class CreateScheduleResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit CreateScheduleResponsePrivate(CreateScheduleResponse * const q);

    void parseCreateScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateScheduleResponse)
    Q_DISABLE_COPY(CreateScheduleResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
