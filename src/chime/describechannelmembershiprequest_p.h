// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMEMBERSHIPREQUEST_P_H
#define QTAWS_DESCRIBECHANNELMEMBERSHIPREQUEST_P_H

#include "chimerequest_p.h"
#include "describechannelmembershiprequest.h"

namespace QtAws {
namespace Chime {

class DescribeChannelMembershipRequest;

class DescribeChannelMembershipRequestPrivate : public ChimeRequestPrivate {

public:
    DescribeChannelMembershipRequestPrivate(const ChimeRequest::Action action,
                                   DescribeChannelMembershipRequest * const q);
    DescribeChannelMembershipRequestPrivate(const DescribeChannelMembershipRequestPrivate &other,
                                   DescribeChannelMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChannelMembershipRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
