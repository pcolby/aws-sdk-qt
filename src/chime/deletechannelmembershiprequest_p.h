// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMEMBERSHIPREQUEST_P_H
#define QTAWS_DELETECHANNELMEMBERSHIPREQUEST_P_H

#include "chimerequest_p.h"
#include "deletechannelmembershiprequest.h"

namespace QtAws {
namespace Chime {

class DeleteChannelMembershipRequest;

class DeleteChannelMembershipRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteChannelMembershipRequestPrivate(const ChimeRequest::Action action,
                                   DeleteChannelMembershipRequest * const q);
    DeleteChannelMembershipRequestPrivate(const DeleteChannelMembershipRequestPrivate &other,
                                   DeleteChannelMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteChannelMembershipRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
