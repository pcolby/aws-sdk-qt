// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTVERSIONSRESPONSE_P_H
#define QTAWS_GETSEGMENTVERSIONSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentVersionsResponse;

class GetSegmentVersionsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetSegmentVersionsResponsePrivate(GetSegmentVersionsResponse * const q);

    void parseGetSegmentVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSegmentVersionsResponse)
    Q_DISABLE_COPY(GetSegmentVersionsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
