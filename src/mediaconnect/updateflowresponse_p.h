// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWRESPONSE_P_H
#define QTAWS_UPDATEFLOWRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowResponse;

class UpdateFlowResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit UpdateFlowResponsePrivate(UpdateFlowResponse * const q);

    void parseUpdateFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFlowResponse)
    Q_DISABLE_COPY(UpdateFlowResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
