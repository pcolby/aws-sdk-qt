// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGGREGATEDUTTERANCESRESPONSE_P_H
#define QTAWS_LISTAGGREGATEDUTTERANCESRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class ListAggregatedUtterancesResponse;

class ListAggregatedUtterancesResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit ListAggregatedUtterancesResponsePrivate(ListAggregatedUtterancesResponse * const q);

    void parseListAggregatedUtterancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAggregatedUtterancesResponse)
    Q_DISABLE_COPY(ListAggregatedUtterancesResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
