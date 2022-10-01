// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATECHANNELMEMBERSHIPREQUEST_P_H
#define QTAWS_BATCHCREATECHANNELMEMBERSHIPREQUEST_P_H

#include "chimerequest_p.h"
#include "batchcreatechannelmembershiprequest.h"

namespace QtAws {
namespace Chime {

class BatchCreateChannelMembershipRequest;

class BatchCreateChannelMembershipRequestPrivate : public ChimeRequestPrivate {

public:
    BatchCreateChannelMembershipRequestPrivate(const ChimeRequest::Action action,
                                   BatchCreateChannelMembershipRequest * const q);
    BatchCreateChannelMembershipRequestPrivate(const BatchCreateChannelMembershipRequestPrivate &other,
                                   BatchCreateChannelMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchCreateChannelMembershipRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
