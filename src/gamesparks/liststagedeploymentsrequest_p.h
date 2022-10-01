// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTAGEDEPLOYMENTSREQUEST_P_H
#define QTAWS_LISTSTAGEDEPLOYMENTSREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "liststagedeploymentsrequest.h"

namespace QtAws {
namespace GameSparks {

class ListStageDeploymentsRequest;

class ListStageDeploymentsRequestPrivate : public GameSparksRequestPrivate {

public:
    ListStageDeploymentsRequestPrivate(const GameSparksRequest::Action action,
                                   ListStageDeploymentsRequest * const q);
    ListStageDeploymentsRequestPrivate(const ListStageDeploymentsRequestPrivate &other,
                                   ListStageDeploymentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStageDeploymentsRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
