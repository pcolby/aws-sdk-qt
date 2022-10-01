// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERATEBASEDRULERESPONSE_P_H
#define QTAWS_DELETERATEBASEDRULERESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class DeleteRateBasedRuleResponse;

class DeleteRateBasedRuleResponsePrivate : public WafResponsePrivate {

public:

    explicit DeleteRateBasedRuleResponsePrivate(DeleteRateBasedRuleResponse * const q);

    void parseDeleteRateBasedRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRateBasedRuleResponse)
    Q_DISABLE_COPY(DeleteRateBasedRuleResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
