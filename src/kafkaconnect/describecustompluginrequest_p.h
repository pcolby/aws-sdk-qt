// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMPLUGINREQUEST_P_H
#define QTAWS_DESCRIBECUSTOMPLUGINREQUEST_P_H

#include "kafkaconnectrequest_p.h"
#include "describecustompluginrequest.h"

namespace QtAws {
namespace KafkaConnect {

class DescribeCustomPluginRequest;

class DescribeCustomPluginRequestPrivate : public KafkaConnectRequestPrivate {

public:
    DescribeCustomPluginRequestPrivate(const KafkaConnectRequest::Action action,
                                   DescribeCustomPluginRequest * const q);
    DescribeCustomPluginRequestPrivate(const DescribeCustomPluginRequestPrivate &other,
                                   DescribeCustomPluginRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCustomPluginRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
