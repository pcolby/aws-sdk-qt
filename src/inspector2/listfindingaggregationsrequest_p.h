// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGAGGREGATIONSREQUEST_P_H
#define QTAWS_LISTFINDINGAGGREGATIONSREQUEST_P_H

#include "inspector2request_p.h"
#include "listfindingaggregationsrequest.h"

namespace QtAws {
namespace Inspector2 {

class ListFindingAggregationsRequest;

class ListFindingAggregationsRequestPrivate : public Inspector2RequestPrivate {

public:
    ListFindingAggregationsRequestPrivate(const Inspector2Request::Action action,
                                   ListFindingAggregationsRequest * const q);
    ListFindingAggregationsRequestPrivate(const ListFindingAggregationsRequestPrivate &other,
                                   ListFindingAggregationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFindingAggregationsRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
