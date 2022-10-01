// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFLOWRESPONSE_P_H
#define QTAWS_STOPFLOWRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class StopFlowResponse;

class StopFlowResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit StopFlowResponsePrivate(StopFlowResponse * const q);

    void parseStopFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopFlowResponse)
    Q_DISABLE_COPY(StopFlowResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
