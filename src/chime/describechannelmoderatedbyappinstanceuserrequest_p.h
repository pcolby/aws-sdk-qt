// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMODERATEDBYAPPINSTANCEUSERREQUEST_P_H
#define QTAWS_DESCRIBECHANNELMODERATEDBYAPPINSTANCEUSERREQUEST_P_H

#include "chimerequest_p.h"
#include "describechannelmoderatedbyappinstanceuserrequest.h"

namespace QtAws {
namespace Chime {

class DescribeChannelModeratedByAppInstanceUserRequest;

class DescribeChannelModeratedByAppInstanceUserRequestPrivate : public ChimeRequestPrivate {

public:
    DescribeChannelModeratedByAppInstanceUserRequestPrivate(const ChimeRequest::Action action,
                                   DescribeChannelModeratedByAppInstanceUserRequest * const q);
    DescribeChannelModeratedByAppInstanceUserRequestPrivate(const DescribeChannelModeratedByAppInstanceUserRequestPrivate &other,
                                   DescribeChannelModeratedByAppInstanceUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChannelModeratedByAppInstanceUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
