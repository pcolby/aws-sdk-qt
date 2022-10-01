// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONREVISIONREQUEST_P_H
#define QTAWS_DESCRIBECONFIGURATIONREVISIONREQUEST_P_H

#include "mqrequest_p.h"
#include "describeconfigurationrevisionrequest.h"

namespace QtAws {
namespace Mq {

class DescribeConfigurationRevisionRequest;

class DescribeConfigurationRevisionRequestPrivate : public MqRequestPrivate {

public:
    DescribeConfigurationRevisionRequestPrivate(const MqRequest::Action action,
                                   DescribeConfigurationRevisionRequest * const q);
    DescribeConfigurationRevisionRequestPrivate(const DescribeConfigurationRevisionRequestPrivate &other,
                                   DescribeConfigurationRevisionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationRevisionRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
