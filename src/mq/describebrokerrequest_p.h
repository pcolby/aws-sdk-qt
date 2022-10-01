// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBROKERREQUEST_P_H
#define QTAWS_DESCRIBEBROKERREQUEST_P_H

#include "mqrequest_p.h"
#include "describebrokerrequest.h"

namespace QtAws {
namespace Mq {

class DescribeBrokerRequest;

class DescribeBrokerRequestPrivate : public MqRequestPrivate {

public:
    DescribeBrokerRequestPrivate(const MqRequest::Action action,
                                   DescribeBrokerRequest * const q);
    DescribeBrokerRequestPrivate(const DescribeBrokerRequestPrivate &other,
                                   DescribeBrokerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBrokerRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
