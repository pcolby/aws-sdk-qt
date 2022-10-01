// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESEGMENTRESPONSE_P_H
#define QTAWS_CREATESEGMENTRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class CreateSegmentResponse;

class CreateSegmentResponsePrivate : public PinpointResponsePrivate {

public:

    explicit CreateSegmentResponsePrivate(CreateSegmentResponse * const q);

    void parseCreateSegmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSegmentResponse)
    Q_DISABLE_COPY(CreateSegmentResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
