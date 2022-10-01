// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFINDINGAGGREGATORREQUEST_P_H
#define QTAWS_CREATEFINDINGAGGREGATORREQUEST_P_H

#include "securityhubrequest_p.h"
#include "createfindingaggregatorrequest.h"

namespace QtAws {
namespace SecurityHub {

class CreateFindingAggregatorRequest;

class CreateFindingAggregatorRequestPrivate : public SecurityHubRequestPrivate {

public:
    CreateFindingAggregatorRequestPrivate(const SecurityHubRequest::Action action,
                                   CreateFindingAggregatorRequest * const q);
    CreateFindingAggregatorRequestPrivate(const CreateFindingAggregatorRequestPrivate &other,
                                   CreateFindingAggregatorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFindingAggregatorRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
