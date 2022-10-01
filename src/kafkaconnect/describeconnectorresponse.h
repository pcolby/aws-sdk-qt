// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTORRESPONSE_H
#define QTAWS_DESCRIBECONNECTORRESPONSE_H

#include "kafkaconnectresponse.h"
#include "describeconnectorrequest.h"

namespace QtAws {
namespace KafkaConnect {

class DescribeConnectorResponsePrivate;

class QTAWSKAFKACONNECT_EXPORT DescribeConnectorResponse : public KafkaConnectResponse {
    Q_OBJECT

public:
    DescribeConnectorResponse(const DescribeConnectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConnectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectorResponse)
    Q_DISABLE_COPY(DescribeConnectorResponse)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
