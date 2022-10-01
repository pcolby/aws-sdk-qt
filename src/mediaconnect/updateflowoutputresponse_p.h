// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWOUTPUTRESPONSE_P_H
#define QTAWS_UPDATEFLOWOUTPUTRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowOutputResponse;

class UpdateFlowOutputResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit UpdateFlowOutputResponsePrivate(UpdateFlowOutputResponse * const q);

    void parseUpdateFlowOutputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFlowOutputResponse)
    Q_DISABLE_COPY(UpdateFlowOutputResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
