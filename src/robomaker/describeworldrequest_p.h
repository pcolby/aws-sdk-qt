// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORLDREQUEST_P_H
#define QTAWS_DESCRIBEWORLDREQUEST_P_H

#include "robomakerrequest_p.h"
#include "describeworldrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeWorldRequest;

class DescribeWorldRequestPrivate : public RoboMakerRequestPrivate {

public:
    DescribeWorldRequestPrivate(const RoboMakerRequest::Action action,
                                   DescribeWorldRequest * const q);
    DescribeWorldRequestPrivate(const DescribeWorldRequestPrivate &other,
                                   DescribeWorldRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorldRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
