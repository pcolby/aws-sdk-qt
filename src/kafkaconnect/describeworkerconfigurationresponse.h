// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKERCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEWORKERCONFIGURATIONRESPONSE_H

#include "kafkaconnectresponse.h"
#include "describeworkerconfigurationrequest.h"

namespace QtAws {
namespace KafkaConnect {

class DescribeWorkerConfigurationResponsePrivate;

class QTAWSKAFKACONNECT_EXPORT DescribeWorkerConfigurationResponse : public KafkaConnectResponse {
    Q_OBJECT

public:
    DescribeWorkerConfigurationResponse(const DescribeWorkerConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorkerConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkerConfigurationResponse)
    Q_DISABLE_COPY(DescribeWorkerConfigurationResponse)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
