// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTREQUEST_P_H
#define QTAWS_DESCRIBEINPUTREQUEST_P_H

#include "medialiverequest_p.h"
#include "describeinputrequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeInputRequest;

class DescribeInputRequestPrivate : public MediaLiveRequestPrivate {

public:
    DescribeInputRequestPrivate(const MediaLiveRequest::Action action,
                                   DescribeInputRequest * const q);
    DescribeInputRequestPrivate(const DescribeInputRequestPrivate &other,
                                   DescribeInputRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInputRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
