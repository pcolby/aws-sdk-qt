// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEDULERESPONSE_P_H
#define QTAWS_UPDATESCHEDULERESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class UpdateScheduleResponse;

class UpdateScheduleResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit UpdateScheduleResponsePrivate(UpdateScheduleResponse * const q);

    void parseUpdateScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateScheduleResponse)
    Q_DISABLE_COPY(UpdateScheduleResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
