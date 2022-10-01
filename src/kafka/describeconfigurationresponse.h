// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBECONFIGURATIONRESPONSE_H

#include "kafkaresponse.h"
#include "describeconfigurationrequest.h"

namespace QtAws {
namespace Kafka {

class DescribeConfigurationResponsePrivate;

class QTAWSKAFKA_EXPORT DescribeConfigurationResponse : public KafkaResponse {
    Q_OBJECT

public:
    DescribeConfigurationResponse(const DescribeConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationResponse)
    Q_DISABLE_COPY(DescribeConfigurationResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
