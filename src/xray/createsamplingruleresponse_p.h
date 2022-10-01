// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAMPLINGRULERESPONSE_P_H
#define QTAWS_CREATESAMPLINGRULERESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class CreateSamplingRuleResponse;

class CreateSamplingRuleResponsePrivate : public XRayResponsePrivate {

public:

    explicit CreateSamplingRuleResponsePrivate(CreateSamplingRuleResponse * const q);

    void parseCreateSamplingRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSamplingRuleResponse)
    Q_DISABLE_COPY(CreateSamplingRuleResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
