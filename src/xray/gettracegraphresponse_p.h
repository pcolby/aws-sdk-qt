// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRACEGRAPHRESPONSE_P_H
#define QTAWS_GETTRACEGRAPHRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class GetTraceGraphResponse;

class GetTraceGraphResponsePrivate : public XRayResponsePrivate {

public:

    explicit GetTraceGraphResponsePrivate(GetTraceGraphResponse * const q);

    void parseGetTraceGraphResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTraceGraphResponse)
    Q_DISABLE_COPY(GetTraceGraphResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
