// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSUMMARYRESPONSE_P_H
#define QTAWS_GETACCOUNTSUMMARYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetAccountSummaryResponse;

class GetAccountSummaryResponsePrivate : public IamResponsePrivate {

public:

    explicit GetAccountSummaryResponsePrivate(GetAccountSummaryResponse * const q);

    void parseGetAccountSummaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccountSummaryResponse)
    Q_DISABLE_COPY(GetAccountSummaryResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
