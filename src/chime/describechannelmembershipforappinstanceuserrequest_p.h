// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMEMBERSHIPFORAPPINSTANCEUSERREQUEST_P_H
#define QTAWS_DESCRIBECHANNELMEMBERSHIPFORAPPINSTANCEUSERREQUEST_P_H

#include "chimerequest_p.h"
#include "describechannelmembershipforappinstanceuserrequest.h"

namespace QtAws {
namespace Chime {

class DescribeChannelMembershipForAppInstanceUserRequest;

class DescribeChannelMembershipForAppInstanceUserRequestPrivate : public ChimeRequestPrivate {

public:
    DescribeChannelMembershipForAppInstanceUserRequestPrivate(const ChimeRequest::Action action,
                                   DescribeChannelMembershipForAppInstanceUserRequest * const q);
    DescribeChannelMembershipForAppInstanceUserRequestPrivate(const DescribeChannelMembershipForAppInstanceUserRequestPrivate &other,
                                   DescribeChannelMembershipForAppInstanceUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChannelMembershipForAppInstanceUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
