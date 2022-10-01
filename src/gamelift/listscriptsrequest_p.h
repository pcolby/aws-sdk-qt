// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCRIPTSREQUEST_P_H
#define QTAWS_LISTSCRIPTSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "listscriptsrequest.h"

namespace QtAws {
namespace GameLift {

class ListScriptsRequest;

class ListScriptsRequestPrivate : public GameLiftRequestPrivate {

public:
    ListScriptsRequestPrivate(const GameLiftRequest::Action action,
                                   ListScriptsRequest * const q);
    ListScriptsRequestPrivate(const ListScriptsRequestPrivate &other,
                                   ListScriptsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListScriptsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
