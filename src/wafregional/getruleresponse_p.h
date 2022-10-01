// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULERESPONSE_P_H
#define QTAWS_GETRULERESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class GetRuleResponse;

class GetRuleResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit GetRuleResponsePrivate(GetRuleResponse * const q);

    void parseGetRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRuleResponse)
    Q_DISABLE_COPY(GetRuleResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
