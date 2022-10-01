// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBECONFIGURATIONREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class DescribeConfigurationRequestPrivate;

class QTAWSKAFKA_EXPORT DescribeConfigurationRequest : public KafkaRequest {

public:
    DescribeConfigurationRequest(const DescribeConfigurationRequest &other);
    DescribeConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
