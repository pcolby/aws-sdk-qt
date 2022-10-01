// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFLOWMEDIASTREAMSRESPONSE_P_H
#define QTAWS_ADDFLOWMEDIASTREAMSRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class AddFlowMediaStreamsResponse;

class AddFlowMediaStreamsResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit AddFlowMediaStreamsResponsePrivate(AddFlowMediaStreamsResponse * const q);

    void parseAddFlowMediaStreamsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddFlowMediaStreamsResponse)
    Q_DISABLE_COPY(AddFlowMediaStreamsResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
