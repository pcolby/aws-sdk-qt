// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROOMREQUEST_P_H
#define QTAWS_GETROOMREQUEST_P_H

#include "ivschatrequest_p.h"
#include "getroomrequest.h"

namespace QtAws {
namespace IvsChat {

class GetRoomRequest;

class GetRoomRequestPrivate : public IvsChatRequestPrivate {

public:
    GetRoomRequestPrivate(const IvsChatRequest::Action action,
                                   GetRoomRequest * const q);
    GetRoomRequestPrivate(const GetRoomRequestPrivate &other,
                                   GetRoomRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRoomRequest)

};

} // namespace IvsChat
} // namespace QtAws

#endif
