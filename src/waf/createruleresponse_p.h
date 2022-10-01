// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULERESPONSE_P_H
#define QTAWS_CREATERULERESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class CreateRuleResponse;

class CreateRuleResponsePrivate : public WafResponsePrivate {

public:

    explicit CreateRuleResponsePrivate(CreateRuleResponse * const q);

    void parseCreateRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRuleResponse)
    Q_DISABLE_COPY(CreateRuleResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
