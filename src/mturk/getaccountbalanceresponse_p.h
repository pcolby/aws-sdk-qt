// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTBALANCERESPONSE_P_H
#define QTAWS_GETACCOUNTBALANCERESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class GetAccountBalanceResponse;

class GetAccountBalanceResponsePrivate : public MTurkResponsePrivate {

public:

    explicit GetAccountBalanceResponsePrivate(GetAccountBalanceResponse * const q);

    void parseGetAccountBalanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccountBalanceResponse)
    Q_DISABLE_COPY(GetAccountBalanceResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
