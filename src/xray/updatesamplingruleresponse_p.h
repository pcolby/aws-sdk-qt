// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESAMPLINGRULERESPONSE_P_H
#define QTAWS_UPDATESAMPLINGRULERESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class UpdateSamplingRuleResponse;

class UpdateSamplingRuleResponsePrivate : public XRayResponsePrivate {

public:

    explicit UpdateSamplingRuleResponsePrivate(UpdateSamplingRuleResponse * const q);

    void parseUpdateSamplingRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSamplingRuleResponse)
    Q_DISABLE_COPY(UpdateSamplingRuleResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
