// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROOMSREQUEST_P_H
#define QTAWS_LISTROOMSREQUEST_P_H

#include "ivschatrequest_p.h"
#include "listroomsrequest.h"

namespace QtAws {
namespace IvsChat {

class ListRoomsRequest;

class ListRoomsRequestPrivate : public IvsChatRequestPrivate {

public:
    ListRoomsRequestPrivate(const IvsChatRequest::Action action,
                                   ListRoomsRequest * const q);
    ListRoomsRequestPrivate(const ListRoomsRequestPrivate &other,
                                   ListRoomsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRoomsRequest)

};

} // namespace IvsChat
} // namespace QtAws

#endif
