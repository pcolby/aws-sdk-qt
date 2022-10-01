// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROOMREQUEST_P_H
#define QTAWS_CREATEROOMREQUEST_P_H

#include "chimerequest_p.h"
#include "createroomrequest.h"

namespace QtAws {
namespace Chime {

class CreateRoomRequest;

class CreateRoomRequestPrivate : public ChimeRequestPrivate {

public:
    CreateRoomRequestPrivate(const ChimeRequest::Action action,
                                   CreateRoomRequest * const q);
    CreateRoomRequestPrivate(const CreateRoomRequestPrivate &other,
                                   CreateRoomRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRoomRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
