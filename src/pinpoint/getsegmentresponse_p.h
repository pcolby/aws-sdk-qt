// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTRESPONSE_P_H
#define QTAWS_GETSEGMENTRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentResponse;

class GetSegmentResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetSegmentResponsePrivate(GetSegmentResponse * const q);

    void parseGetSegmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSegmentResponse)
    Q_DISABLE_COPY(GetSegmentResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
