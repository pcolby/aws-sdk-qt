// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKERCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEWORKERCONFIGURATIONREQUEST_H

#include "kafkaconnectrequest.h"

namespace QtAws {
namespace KafkaConnect {

class DescribeWorkerConfigurationRequestPrivate;

class QTAWSKAFKACONNECT_EXPORT DescribeWorkerConfigurationRequest : public KafkaConnectRequest {

public:
    DescribeWorkerConfigurationRequest(const DescribeWorkerConfigurationRequest &other);
    DescribeWorkerConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkerConfigurationRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
