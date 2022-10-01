// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMPLUGINREQUEST_H
#define QTAWS_DESCRIBECUSTOMPLUGINREQUEST_H

#include "kafkaconnectrequest.h"

namespace QtAws {
namespace KafkaConnect {

class DescribeCustomPluginRequestPrivate;

class QTAWSKAFKACONNECT_EXPORT DescribeCustomPluginRequest : public KafkaConnectRequest {

public:
    DescribeCustomPluginRequest(const DescribeCustomPluginRequest &other);
    DescribeCustomPluginRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomPluginRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
