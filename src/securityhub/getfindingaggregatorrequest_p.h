// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGAGGREGATORREQUEST_P_H
#define QTAWS_GETFINDINGAGGREGATORREQUEST_P_H

#include "securityhubrequest_p.h"
#include "getfindingaggregatorrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetFindingAggregatorRequest;

class GetFindingAggregatorRequestPrivate : public SecurityHubRequestPrivate {

public:
    GetFindingAggregatorRequestPrivate(const SecurityHubRequest::Action action,
                                   GetFindingAggregatorRequest * const q);
    GetFindingAggregatorRequestPrivate(const GetFindingAggregatorRequestPrivate &other,
                                   GetFindingAggregatorRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFindingAggregatorRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
