// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTRESPONSE_P_H
#define QTAWS_GETSEGMENTRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class GetSegmentResponse;

class GetSegmentResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit GetSegmentResponsePrivate(GetSegmentResponse * const q);

    void parseGetSegmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSegmentResponse)
    Q_DISABLE_COPY(GetSegmentResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
