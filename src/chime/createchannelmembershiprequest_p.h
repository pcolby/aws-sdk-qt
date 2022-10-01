// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELMEMBERSHIPREQUEST_P_H
#define QTAWS_CREATECHANNELMEMBERSHIPREQUEST_P_H

#include "chimerequest_p.h"
#include "createchannelmembershiprequest.h"

namespace QtAws {
namespace Chime {

class CreateChannelMembershipRequest;

class CreateChannelMembershipRequestPrivate : public ChimeRequestPrivate {

public:
    CreateChannelMembershipRequestPrivate(const ChimeRequest::Action action,
                                   CreateChannelMembershipRequest * const q);
    CreateChannelMembershipRequestPrivate(const CreateChannelMembershipRequestPrivate &other,
                                   CreateChannelMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateChannelMembershipRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
