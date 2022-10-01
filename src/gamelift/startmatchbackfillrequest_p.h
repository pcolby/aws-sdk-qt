// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMATCHBACKFILLREQUEST_P_H
#define QTAWS_STARTMATCHBACKFILLREQUEST_P_H

#include "gameliftrequest_p.h"
#include "startmatchbackfillrequest.h"

namespace QtAws {
namespace GameLift {

class StartMatchBackfillRequest;

class StartMatchBackfillRequestPrivate : public GameLiftRequestPrivate {

public:
    StartMatchBackfillRequestPrivate(const GameLiftRequest::Action action,
                                   StartMatchBackfillRequest * const q);
    StartMatchBackfillRequestPrivate(const StartMatchBackfillRequestPrivate &other,
                                   StartMatchBackfillRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMatchBackfillRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
