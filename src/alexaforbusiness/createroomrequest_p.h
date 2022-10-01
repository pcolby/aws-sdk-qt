// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROOMREQUEST_P_H
#define QTAWS_CREATEROOMREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "createroomrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateRoomRequest;

class CreateRoomRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    CreateRoomRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   CreateRoomRequest * const q);
    CreateRoomRequestPrivate(const CreateRoomRequestPrivate &other,
                                   CreateRoomRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRoomRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
