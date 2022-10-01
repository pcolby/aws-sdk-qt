// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHGAMESESSIONSREQUEST_P_H
#define QTAWS_SEARCHGAMESESSIONSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "searchgamesessionsrequest.h"

namespace QtAws {
namespace GameLift {

class SearchGameSessionsRequest;

class SearchGameSessionsRequestPrivate : public GameLiftRequestPrivate {

public:
    SearchGameSessionsRequestPrivate(const GameLiftRequest::Action action,
                                   SearchGameSessionsRequest * const q);
    SearchGameSessionsRequestPrivate(const SearchGameSessionsRequestPrivate &other,
                                   SearchGameSessionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchGameSessionsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
