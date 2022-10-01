// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETSRESPONSE_P_H
#define QTAWS_LISTDATASETSRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class ListDataSetsResponse;

class ListDataSetsResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit ListDataSetsResponsePrivate(ListDataSetsResponse * const q);

    void parseListDataSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDataSetsResponse)
    Q_DISABLE_COPY(ListDataSetsResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
