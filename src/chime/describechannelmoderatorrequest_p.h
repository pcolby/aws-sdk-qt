// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMODERATORREQUEST_P_H
#define QTAWS_DESCRIBECHANNELMODERATORREQUEST_P_H

#include "chimerequest_p.h"
#include "describechannelmoderatorrequest.h"

namespace QtAws {
namespace Chime {

class DescribeChannelModeratorRequest;

class DescribeChannelModeratorRequestPrivate : public ChimeRequestPrivate {

public:
    DescribeChannelModeratorRequestPrivate(const ChimeRequest::Action action,
                                   DescribeChannelModeratorRequest * const q);
    DescribeChannelModeratorRequestPrivate(const DescribeChannelModeratorRequestPrivate &other,
                                   DescribeChannelModeratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChannelModeratorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
