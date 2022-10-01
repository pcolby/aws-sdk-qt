// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUEHOURSOFOPERATIONRESPONSE_P_H
#define QTAWS_UPDATEQUEUEHOURSOFOPERATIONRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateQueueHoursOfOperationResponse;

class UpdateQueueHoursOfOperationResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateQueueHoursOfOperationResponsePrivate(UpdateQueueHoursOfOperationResponse * const q);

    void parseUpdateQueueHoursOfOperationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateQueueHoursOfOperationResponse)
    Q_DISABLE_COPY(UpdateQueueHoursOfOperationResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
