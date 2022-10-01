// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGAMEREQUEST_P_H
#define QTAWS_CREATEGAMEREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "creategamerequest.h"

namespace QtAws {
namespace GameSparks {

class CreateGameRequest;

class CreateGameRequestPrivate : public GameSparksRequestPrivate {

public:
    CreateGameRequestPrivate(const GameSparksRequest::Action action,
                                   CreateGameRequest * const q);
    CreateGameRequestPrivate(const CreateGameRequestPrivate &other,
                                   CreateGameRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGameRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
