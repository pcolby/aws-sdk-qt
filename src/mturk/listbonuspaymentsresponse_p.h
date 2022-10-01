// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBONUSPAYMENTSRESPONSE_P_H
#define QTAWS_LISTBONUSPAYMENTSRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class ListBonusPaymentsResponse;

class ListBonusPaymentsResponsePrivate : public MTurkResponsePrivate {

public:

    explicit ListBonusPaymentsResponsePrivate(ListBonusPaymentsResponse * const q);

    void parseListBonusPaymentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBonusPaymentsResponse)
    Q_DISABLE_COPY(ListBonusPaymentsResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
