// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFINDINGAGGREGATORREQUEST_P_H
#define QTAWS_DELETEFINDINGAGGREGATORREQUEST_P_H

#include "securityhubrequest_p.h"
#include "deletefindingaggregatorrequest.h"

namespace QtAws {
namespace SecurityHub {

class DeleteFindingAggregatorRequest;

class DeleteFindingAggregatorRequestPrivate : public SecurityHubRequestPrivate {

public:
    DeleteFindingAggregatorRequestPrivate(const SecurityHubRequest::Action action,
                                   DeleteFindingAggregatorRequest * const q);
    DeleteFindingAggregatorRequestPrivate(const DeleteFindingAggregatorRequestPrivate &other,
                                   DeleteFindingAggregatorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFindingAggregatorRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
