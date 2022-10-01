// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGRULERESPONSE_P_H
#define QTAWS_DELETECONFIGRULERESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DeleteConfigRuleResponse;

class DeleteConfigRuleResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DeleteConfigRuleResponsePrivate(DeleteConfigRuleResponse * const q);

    void parseDeleteConfigRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConfigRuleResponse)
    Q_DISABLE_COPY(DeleteConfigRuleResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
