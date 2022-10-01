// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTRESPONSE_P_H
#define QTAWS_GETINSIGHTRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class GetInsightResponse;

class GetInsightResponsePrivate : public XRayResponsePrivate {

public:

    explicit GetInsightResponsePrivate(GetInsightResponse * const q);

    void parseGetInsightResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInsightResponse)
    Q_DISABLE_COPY(GetInsightResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
