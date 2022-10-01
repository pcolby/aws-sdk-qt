// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGRULERESPONSE_P_H
#define QTAWS_PUTCONFIGRULERESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class PutConfigRuleResponse;

class PutConfigRuleResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit PutConfigRuleResponsePrivate(PutConfigRuleResponse * const q);

    void parsePutConfigRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutConfigRuleResponse)
    Q_DISABLE_COPY(PutConfigRuleResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
