// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGAMEREQUEST_P_H
#define QTAWS_DELETEGAMEREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "deletegamerequest.h"

namespace QtAws {
namespace GameSparks {

class DeleteGameRequest;

class DeleteGameRequestPrivate : public GameSparksRequestPrivate {

public:
    DeleteGameRequestPrivate(const GameSparksRequest::Action action,
                                   DeleteGameRequest * const q);
    DeleteGameRequestPrivate(const DeleteGameRequestPrivate &other,
                                   DeleteGameRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGameRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
