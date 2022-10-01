// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRATEBASEDRULEMANAGEDKEYSRESPONSE_P_H
#define QTAWS_GETRATEBASEDRULEMANAGEDKEYSRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class GetRateBasedRuleManagedKeysResponse;

class GetRateBasedRuleManagedKeysResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit GetRateBasedRuleManagedKeysResponsePrivate(GetRateBasedRuleManagedKeysResponse * const q);

    void parseGetRateBasedRuleManagedKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRateBasedRuleManagedKeysResponse)
    Q_DISABLE_COPY(GetRateBasedRuleManagedKeysResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
