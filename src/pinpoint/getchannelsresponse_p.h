// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELSRESPONSE_P_H
#define QTAWS_GETCHANNELSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetChannelsResponse;

class GetChannelsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetChannelsResponsePrivate(GetChannelsResponse * const q);

    void parseGetChannelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetChannelsResponse)
    Q_DISABLE_COPY(GetChannelsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
