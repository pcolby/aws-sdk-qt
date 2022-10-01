// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRATEBASEDSTATEMENTMANAGEDKEYSRESPONSE_P_H
#define QTAWS_GETRATEBASEDSTATEMENTMANAGEDKEYSRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class GetRateBasedStatementManagedKeysResponse;

class GetRateBasedStatementManagedKeysResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit GetRateBasedStatementManagedKeysResponsePrivate(GetRateBasedStatementManagedKeysResponse * const q);

    void parseGetRateBasedStatementManagedKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRateBasedStatementManagedKeysResponse)
    Q_DISABLE_COPY(GetRateBasedStatementManagedKeysResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
