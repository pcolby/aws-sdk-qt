// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGAGGREGATIONSRESPONSE_P_H
#define QTAWS_LISTFINDINGAGGREGATIONSRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class ListFindingAggregationsResponse;

class ListFindingAggregationsResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit ListFindingAggregationsResponsePrivate(ListFindingAggregationsResponse * const q);

    void parseListFindingAggregationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFindingAggregationsResponse)
    Q_DISABLE_COPY(ListFindingAggregationsResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
