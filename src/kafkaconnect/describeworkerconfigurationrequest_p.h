// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKERCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEWORKERCONFIGURATIONREQUEST_P_H

#include "kafkaconnectrequest_p.h"
#include "describeworkerconfigurationrequest.h"

namespace QtAws {
namespace KafkaConnect {

class DescribeWorkerConfigurationRequest;

class DescribeWorkerConfigurationRequestPrivate : public KafkaConnectRequestPrivate {

public:
    DescribeWorkerConfigurationRequestPrivate(const KafkaConnectRequest::Action action,
                                   DescribeWorkerConfigurationRequest * const q);
    DescribeWorkerConfigurationRequestPrivate(const DescribeWorkerConfigurationRequestPrivate &other,
                                   DescribeWorkerConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkerConfigurationRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
