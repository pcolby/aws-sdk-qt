// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMANAGEDRULESETRESPONSE_P_H
#define QTAWS_GETMANAGEDRULESETRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class GetManagedRuleSetResponse;

class GetManagedRuleSetResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit GetManagedRuleSetResponsePrivate(GetManagedRuleSetResponse * const q);

    void parseGetManagedRuleSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetManagedRuleSetResponse)
    Q_DISABLE_COPY(GetManagedRuleSetResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
