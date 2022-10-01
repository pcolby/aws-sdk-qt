// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREVISIONASSETSRESPONSE_P_H
#define QTAWS_LISTREVISIONASSETSRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class ListRevisionAssetsResponse;

class ListRevisionAssetsResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit ListRevisionAssetsResponsePrivate(ListRevisionAssetsResponse * const q);

    void parseListRevisionAssetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRevisionAssetsResponse)
    Q_DISABLE_COPY(ListRevisionAssetsResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
