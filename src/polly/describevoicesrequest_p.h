// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOICESREQUEST_P_H
#define QTAWS_DESCRIBEVOICESREQUEST_P_H

#include "pollyrequest_p.h"
#include "describevoicesrequest.h"

namespace QtAws {
namespace Polly {

class DescribeVoicesRequest;

class DescribeVoicesRequestPrivate : public PollyRequestPrivate {

public:
    DescribeVoicesRequestPrivate(const PollyRequest::Action action,
                                   DescribeVoicesRequest * const q);
    DescribeVoicesRequestPrivate(const DescribeVoicesRequestPrivate &other,
                                   DescribeVoicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVoicesRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
