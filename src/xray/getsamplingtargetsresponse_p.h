// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLINGTARGETSRESPONSE_P_H
#define QTAWS_GETSAMPLINGTARGETSRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class GetSamplingTargetsResponse;

class GetSamplingTargetsResponsePrivate : public XRayResponsePrivate {

public:

    explicit GetSamplingTargetsResponsePrivate(GetSamplingTargetsResponse * const q);

    void parseGetSamplingTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSamplingTargetsResponse)
    Q_DISABLE_COPY(GetSamplingTargetsResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
