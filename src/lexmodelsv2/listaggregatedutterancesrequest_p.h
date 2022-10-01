// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGGREGATEDUTTERANCESREQUEST_P_H
#define QTAWS_LISTAGGREGATEDUTTERANCESREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "listaggregatedutterancesrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListAggregatedUtterancesRequest;

class ListAggregatedUtterancesRequestPrivate : public LexModelsV2RequestPrivate {

public:
    ListAggregatedUtterancesRequestPrivate(const LexModelsV2Request::Action action,
                                   ListAggregatedUtterancesRequest * const q);
    ListAggregatedUtterancesRequestPrivate(const ListAggregatedUtterancesRequestPrivate &other,
                                   ListAggregatedUtterancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAggregatedUtterancesRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
