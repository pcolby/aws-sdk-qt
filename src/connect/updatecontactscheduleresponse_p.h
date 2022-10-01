// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTSCHEDULERESPONSE_P_H
#define QTAWS_UPDATECONTACTSCHEDULERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateContactScheduleResponse;

class UpdateContactScheduleResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateContactScheduleResponsePrivate(UpdateContactScheduleResponse * const q);

    void parseUpdateContactScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContactScheduleResponse)
    Q_DISABLE_COPY(UpdateContactScheduleResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
