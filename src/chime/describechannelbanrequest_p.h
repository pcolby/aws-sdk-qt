// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELBANREQUEST_P_H
#define QTAWS_DESCRIBECHANNELBANREQUEST_P_H

#include "chimerequest_p.h"
#include "describechannelbanrequest.h"

namespace QtAws {
namespace Chime {

class DescribeChannelBanRequest;

class DescribeChannelBanRequestPrivate : public ChimeRequestPrivate {

public:
    DescribeChannelBanRequestPrivate(const ChimeRequest::Action action,
                                   DescribeChannelBanRequest * const q);
    DescribeChannelBanRequestPrivate(const DescribeChannelBanRequestPrivate &other,
                                   DescribeChannelBanRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChannelBanRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
