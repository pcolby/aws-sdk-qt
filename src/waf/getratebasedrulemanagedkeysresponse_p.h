// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRATEBASEDRULEMANAGEDKEYSRESPONSE_P_H
#define QTAWS_GETRATEBASEDRULEMANAGEDKEYSRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class GetRateBasedRuleManagedKeysResponse;

class GetRateBasedRuleManagedKeysResponsePrivate : public WafResponsePrivate {

public:

    explicit GetRateBasedRuleManagedKeysResponsePrivate(GetRateBasedRuleManagedKeysResponse * const q);

    void parseGetRateBasedRuleManagedKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRateBasedRuleManagedKeysResponse)
    Q_DISABLE_COPY(GetRateBasedRuleManagedKeysResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
