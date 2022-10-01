// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFLOWRESPONSE_P_H
#define QTAWS_STARTFLOWRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class StartFlowResponse;

class StartFlowResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit StartFlowResponsePrivate(StartFlowResponse * const q);

    void parseStartFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartFlowResponse)
    Q_DISABLE_COPY(StartFlowResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
