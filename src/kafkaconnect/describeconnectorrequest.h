// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTORREQUEST_H
#define QTAWS_DESCRIBECONNECTORREQUEST_H

#include "kafkaconnectrequest.h"

namespace QtAws {
namespace KafkaConnect {

class DescribeConnectorRequestPrivate;

class QTAWSKAFKACONNECT_EXPORT DescribeConnectorRequest : public KafkaConnectRequest {

public:
    DescribeConnectorRequest(const DescribeConnectorRequest &other);
    DescribeConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectorRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
