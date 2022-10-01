// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTSECURITYGROUPREQUEST_P_H
#define QTAWS_DESCRIBEINPUTSECURITYGROUPREQUEST_P_H

#include "medialiverequest_p.h"
#include "describeinputsecuritygrouprequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeInputSecurityGroupRequest;

class DescribeInputSecurityGroupRequestPrivate : public MediaLiveRequestPrivate {

public:
    DescribeInputSecurityGroupRequestPrivate(const MediaLiveRequest::Action action,
                                   DescribeInputSecurityGroupRequest * const q);
    DescribeInputSecurityGroupRequestPrivate(const DescribeInputSecurityGroupRequestPrivate &other,
                                   DescribeInputSecurityGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInputSecurityGroupRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
