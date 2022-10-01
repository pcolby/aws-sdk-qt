// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSESRESPONSE_P_H
#define QTAWS_LISTACCESSESRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class ListAccessesResponse;

class ListAccessesResponsePrivate : public TransferResponsePrivate {

public:

    explicit ListAccessesResponsePrivate(ListAccessesResponse * const q);

    void parseListAccessesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccessesResponse)
    Q_DISABLE_COPY(ListAccessesResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
