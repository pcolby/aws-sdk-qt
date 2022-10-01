// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETREVISIONSRESPONSE_P_H
#define QTAWS_LISTDATASETREVISIONSRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class ListDataSetRevisionsResponse;

class ListDataSetRevisionsResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit ListDataSetRevisionsResponsePrivate(ListDataSetRevisionsResponse * const q);

    void parseListDataSetRevisionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDataSetRevisionsResponse)
    Q_DISABLE_COPY(ListDataSetRevisionsResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
