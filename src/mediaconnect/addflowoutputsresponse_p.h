// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFLOWOUTPUTSRESPONSE_P_H
#define QTAWS_ADDFLOWOUTPUTSRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class AddFlowOutputsResponse;

class AddFlowOutputsResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit AddFlowOutputsResponsePrivate(AddFlowOutputsResponse * const q);

    void parseAddFlowOutputsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddFlowOutputsResponse)
    Q_DISABLE_COPY(AddFlowOutputsResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
