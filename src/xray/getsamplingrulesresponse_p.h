// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLINGRULESRESPONSE_P_H
#define QTAWS_GETSAMPLINGRULESRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class GetSamplingRulesResponse;

class GetSamplingRulesResponsePrivate : public XRayResponsePrivate {

public:

    explicit GetSamplingRulesResponsePrivate(GetSamplingRulesResponse * const q);

    void parseGetSamplingRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSamplingRulesResponse)
    Q_DISABLE_COPY(GetSamplingRulesResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
