// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWMEDIASTREAMRESPONSE_P_H
#define QTAWS_UPDATEFLOWMEDIASTREAMRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowMediaStreamResponse;

class UpdateFlowMediaStreamResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit UpdateFlowMediaStreamResponsePrivate(UpdateFlowMediaStreamResponse * const q);

    void parseUpdateFlowMediaStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFlowMediaStreamResponse)
    Q_DISABLE_COPY(UpdateFlowMediaStreamResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
