// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUEOUTBOUNDCALLERCONFIGRESPONSE_P_H
#define QTAWS_UPDATEQUEUEOUTBOUNDCALLERCONFIGRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateQueueOutboundCallerConfigResponse;

class UpdateQueueOutboundCallerConfigResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateQueueOutboundCallerConfigResponsePrivate(UpdateQueueOutboundCallerConfigResponse * const q);

    void parseUpdateQueueOutboundCallerConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateQueueOutboundCallerConfigResponse)
    Q_DISABLE_COPY(UpdateQueueOutboundCallerConfigResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
