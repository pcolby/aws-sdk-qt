// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTGENERATEDCODEJOBREQUEST_P_H
#define QTAWS_STARTGENERATEDCODEJOBREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "startgeneratedcodejobrequest.h"

namespace QtAws {
namespace GameSparks {

class StartGeneratedCodeJobRequest;

class StartGeneratedCodeJobRequestPrivate : public GameSparksRequestPrivate {

public:
    StartGeneratedCodeJobRequestPrivate(const GameSparksRequest::Action action,
                                   StartGeneratedCodeJobRequest * const q);
    StartGeneratedCodeJobRequestPrivate(const StartGeneratedCodeJobRequestPrivate &other,
                                   StartGeneratedCodeJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartGeneratedCodeJobRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
