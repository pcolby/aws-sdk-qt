// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEROOMMEMBERSHIPREQUEST_P_H
#define QTAWS_BATCHCREATEROOMMEMBERSHIPREQUEST_P_H

#include "chimerequest_p.h"
#include "batchcreateroommembershiprequest.h"

namespace QtAws {
namespace Chime {

class BatchCreateRoomMembershipRequest;

class BatchCreateRoomMembershipRequestPrivate : public ChimeRequestPrivate {

public:
    BatchCreateRoomMembershipRequestPrivate(const ChimeRequest::Action action,
                                   BatchCreateRoomMembershipRequest * const q);
    BatchCreateRoomMembershipRequestPrivate(const BatchCreateRoomMembershipRequestPrivate &other,
                                   BatchCreateRoomMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchCreateRoomMembershipRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
