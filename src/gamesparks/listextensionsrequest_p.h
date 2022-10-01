// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIONSREQUEST_P_H
#define QTAWS_LISTEXTENSIONSREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "listextensionsrequest.h"

namespace QtAws {
namespace GameSparks {

class ListExtensionsRequest;

class ListExtensionsRequestPrivate : public GameSparksRequestPrivate {

public:
    ListExtensionsRequestPrivate(const GameSparksRequest::Action action,
                                   ListExtensionsRequest * const q);
    ListExtensionsRequestPrivate(const ListExtensionsRequestPrivate &other,
                                   ListExtensionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListExtensionsRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
