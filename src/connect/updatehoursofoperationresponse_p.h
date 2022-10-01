// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHOURSOFOPERATIONRESPONSE_P_H
#define QTAWS_UPDATEHOURSOFOPERATIONRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateHoursOfOperationResponse;

class UpdateHoursOfOperationResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateHoursOfOperationResponsePrivate(UpdateHoursOfOperationResponse * const q);

    void parseUpdateHoursOfOperationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateHoursOfOperationResponse)
    Q_DISABLE_COPY(UpdateHoursOfOperationResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
