// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUESTATUSRESPONSE_P_H
#define QTAWS_UPDATEQUEUESTATUSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateQueueStatusResponse;

class UpdateQueueStatusResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateQueueStatusResponsePrivate(UpdateQueueStatusResponse * const q);

    void parseUpdateQueueStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateQueueStatusResponse)
    Q_DISABLE_COPY(UpdateQueueStatusResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
