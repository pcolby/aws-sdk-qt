// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTMATCHREQUEST_P_H
#define QTAWS_ACCEPTMATCHREQUEST_P_H

#include "gameliftrequest_p.h"
#include "acceptmatchrequest.h"

namespace QtAws {
namespace GameLift {

class AcceptMatchRequest;

class AcceptMatchRequestPrivate : public GameLiftRequestPrivate {

public:
    AcceptMatchRequestPrivate(const GameLiftRequest::Action action,
                                   AcceptMatchRequest * const q);
    AcceptMatchRequestPrivate(const AcceptMatchRequestPrivate &other,
                                   AcceptMatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptMatchRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
