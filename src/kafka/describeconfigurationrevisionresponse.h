// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONREVISIONRESPONSE_H
#define QTAWS_DESCRIBECONFIGURATIONREVISIONRESPONSE_H

#include "kafkaresponse.h"
#include "describeconfigurationrevisionrequest.h"

namespace QtAws {
namespace Kafka {

class DescribeConfigurationRevisionResponsePrivate;

class QTAWSKAFKA_EXPORT DescribeConfigurationRevisionResponse : public KafkaResponse {
    Q_OBJECT

public:
    DescribeConfigurationRevisionResponse(const DescribeConfigurationRevisionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConfigurationRevisionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationRevisionResponse)
    Q_DISABLE_COPY(DescribeConfigurationRevisionResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
