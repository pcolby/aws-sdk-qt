// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFINDINGAGGREGATORREQUEST_P_H
#define QTAWS_UPDATEFINDINGAGGREGATORREQUEST_P_H

#include "securityhubrequest_p.h"
#include "updatefindingaggregatorrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateFindingAggregatorRequest;

class UpdateFindingAggregatorRequestPrivate : public SecurityHubRequestPrivate {

public:
    UpdateFindingAggregatorRequestPrivate(const SecurityHubRequest::Action action,
                                   UpdateFindingAggregatorRequest * const q);
    UpdateFindingAggregatorRequestPrivate(const UpdateFindingAggregatorRequestPrivate &other,
                                   UpdateFindingAggregatorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFindingAggregatorRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
