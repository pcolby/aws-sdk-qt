// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTAGESREQUEST_P_H
#define QTAWS_LISTSTAGESREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "liststagesrequest.h"

namespace QtAws {
namespace GameSparks {

class ListStagesRequest;

class ListStagesRequestPrivate : public GameSparksRequestPrivate {

public:
    ListStagesRequestPrivate(const GameSparksRequest::Action action,
                                   ListStagesRequest * const q);
    ListStagesRequestPrivate(const ListStagesRequestPrivate &other,
                                   ListStagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStagesRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
