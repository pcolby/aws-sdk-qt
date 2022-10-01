// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESAMPLINGRULERESPONSE_P_H
#define QTAWS_DELETESAMPLINGRULERESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class DeleteSamplingRuleResponse;

class DeleteSamplingRuleResponsePrivate : public XRayResponsePrivate {

public:

    explicit DeleteSamplingRuleResponsePrivate(DeleteSamplingRuleResponse * const q);

    void parseDeleteSamplingRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSamplingRuleResponse)
    Q_DISABLE_COPY(DeleteSamplingRuleResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
