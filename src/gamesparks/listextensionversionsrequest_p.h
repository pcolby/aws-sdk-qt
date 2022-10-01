// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIONVERSIONSREQUEST_P_H
#define QTAWS_LISTEXTENSIONVERSIONSREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "listextensionversionsrequest.h"

namespace QtAws {
namespace GameSparks {

class ListExtensionVersionsRequest;

class ListExtensionVersionsRequestPrivate : public GameSparksRequestPrivate {

public:
    ListExtensionVersionsRequestPrivate(const GameSparksRequest::Action action,
                                   ListExtensionVersionsRequest * const q);
    ListExtensionVersionsRequestPrivate(const ListExtensionVersionsRequestPrivate &other,
                                   ListExtensionVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListExtensionVersionsRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
