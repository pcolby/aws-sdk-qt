// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBROKERINSTANCEOPTIONSREQUEST_P_H
#define QTAWS_DESCRIBEBROKERINSTANCEOPTIONSREQUEST_P_H

#include "mqrequest_p.h"
#include "describebrokerinstanceoptionsrequest.h"

namespace QtAws {
namespace Mq {

class DescribeBrokerInstanceOptionsRequest;

class DescribeBrokerInstanceOptionsRequestPrivate : public MqRequestPrivate {

public:
    DescribeBrokerInstanceOptionsRequestPrivate(const MqRequest::Action action,
                                   DescribeBrokerInstanceOptionsRequest * const q);
    DescribeBrokerInstanceOptionsRequestPrivate(const DescribeBrokerInstanceOptionsRequestPrivate &other,
                                   DescribeBrokerInstanceOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBrokerInstanceOptionsRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
