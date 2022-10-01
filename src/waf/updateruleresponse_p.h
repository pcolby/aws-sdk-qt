// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULERESPONSE_P_H
#define QTAWS_UPDATERULERESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class UpdateRuleResponse;

class UpdateRuleResponsePrivate : public WafResponsePrivate {

public:

    explicit UpdateRuleResponsePrivate(UpdateRuleResponse * const q);

    void parseUpdateRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRuleResponse)
    Q_DISABLE_COPY(UpdateRuleResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
