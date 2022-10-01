// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBECONFIGURATIONREQUEST_P_H

#include "mqrequest_p.h"
#include "describeconfigurationrequest.h"

namespace QtAws {
namespace Mq {

class DescribeConfigurationRequest;

class DescribeConfigurationRequestPrivate : public MqRequestPrivate {

public:
    DescribeConfigurationRequestPrivate(const MqRequest::Action action,
                                   DescribeConfigurationRequest * const q);
    DescribeConfigurationRequestPrivate(const DescribeConfigurationRequestPrivate &other,
                                   DescribeConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
