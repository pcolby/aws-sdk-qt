// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROOMREQUEST_P_H
#define QTAWS_GETROOMREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "getroomrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetRoomRequest;

class GetRoomRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    GetRoomRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   GetRoomRequest * const q);
    GetRoomRequestPrivate(const GetRoomRequestPrivate &other,
                                   GetRoomRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRoomRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
