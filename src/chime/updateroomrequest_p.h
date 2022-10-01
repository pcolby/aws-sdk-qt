// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROOMREQUEST_P_H
#define QTAWS_UPDATEROOMREQUEST_P_H

#include "chimerequest_p.h"
#include "updateroomrequest.h"

namespace QtAws {
namespace Chime {

class UpdateRoomRequest;

class UpdateRoomRequestPrivate : public ChimeRequestPrivate {

public:
    UpdateRoomRequestPrivate(const ChimeRequest::Action action,
                                   UpdateRoomRequest * const q);
    UpdateRoomRequestPrivate(const UpdateRoomRequestPrivate &other,
                                   UpdateRoomRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRoomRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
