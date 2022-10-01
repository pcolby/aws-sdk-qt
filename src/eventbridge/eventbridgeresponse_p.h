// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVENTBRIDGERESPONSE_P_H
#define QTAWS_EVENTBRIDGERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace EventBridge {

class EventBridgeResponse;

class EventBridgeResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit EventBridgeResponsePrivate(EventBridgeResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EventBridgeResponse)
    Q_DISABLE_COPY(EventBridgeResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
