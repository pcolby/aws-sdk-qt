// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONREVISIONREQUEST_P_H
#define QTAWS_DESCRIBECONFIGURATIONREVISIONREQUEST_P_H

#include "kafkarequest_p.h"
#include "describeconfigurationrevisionrequest.h"

namespace QtAws {
namespace Kafka {

class DescribeConfigurationRevisionRequest;

class DescribeConfigurationRevisionRequestPrivate : public KafkaRequestPrivate {

public:
    DescribeConfigurationRevisionRequestPrivate(const KafkaRequest::Action action,
                                   DescribeConfigurationRevisionRequest * const q);
    DescribeConfigurationRevisionRequestPrivate(const DescribeConfigurationRevisionRequestPrivate &other,
                                   DescribeConfigurationRevisionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationRevisionRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
