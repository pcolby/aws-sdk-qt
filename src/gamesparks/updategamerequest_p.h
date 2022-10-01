// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMEREQUEST_P_H
#define QTAWS_UPDATEGAMEREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "updategamerequest.h"

namespace QtAws {
namespace GameSparks {

class UpdateGameRequest;

class UpdateGameRequestPrivate : public GameSparksRequestPrivate {

public:
    UpdateGameRequestPrivate(const GameSparksRequest::Action action,
                                   UpdateGameRequest * const q);
    UpdateGameRequestPrivate(const UpdateGameRequestPrivate &other,
                                   UpdateGameRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGameRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
