// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRACESUMMARIESRESPONSE_P_H
#define QTAWS_GETTRACESUMMARIESRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class GetTraceSummariesResponse;

class GetTraceSummariesResponsePrivate : public XRayResponsePrivate {

public:

    explicit GetTraceSummariesResponsePrivate(GetTraceSummariesResponse * const q);

    void parseGetTraceSummariesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTraceSummariesResponse)
    Q_DISABLE_COPY(GetTraceSummariesResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
