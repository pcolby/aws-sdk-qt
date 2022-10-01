// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGREEMENTSRESPONSE_P_H
#define QTAWS_LISTAGREEMENTSRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class ListAgreementsResponse;

class ListAgreementsResponsePrivate : public TransferResponsePrivate {

public:

    explicit ListAgreementsResponsePrivate(ListAgreementsResponse * const q);

    void parseListAgreementsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAgreementsResponse)
    Q_DISABLE_COPY(ListAgreementsResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
