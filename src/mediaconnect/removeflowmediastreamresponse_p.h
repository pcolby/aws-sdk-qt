// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFLOWMEDIASTREAMRESPONSE_P_H
#define QTAWS_REMOVEFLOWMEDIASTREAMRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowMediaStreamResponse;

class RemoveFlowMediaStreamResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit RemoveFlowMediaStreamResponsePrivate(RemoveFlowMediaStreamResponse * const q);

    void parseRemoveFlowMediaStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveFlowMediaStreamResponse)
    Q_DISABLE_COPY(RemoveFlowMediaStreamResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
