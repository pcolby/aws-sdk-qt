// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONFIGRULESEVALUATIONRESPONSE_P_H
#define QTAWS_STARTCONFIGRULESEVALUATIONRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class StartConfigRulesEvaluationResponse;

class StartConfigRulesEvaluationResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit StartConfigRulesEvaluationResponsePrivate(StartConfigRulesEvaluationResponse * const q);

    void parseStartConfigRulesEvaluationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartConfigRulesEvaluationResponse)
    Q_DISABLE_COPY(StartConfigRulesEvaluationResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
