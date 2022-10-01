// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTEROPERATIONRESPONSE_H
#define QTAWS_DESCRIBECLUSTEROPERATIONRESPONSE_H

#include "kafkaresponse.h"
#include "describeclusteroperationrequest.h"

namespace QtAws {
namespace Kafka {

class DescribeClusterOperationResponsePrivate;

class QTAWSKAFKA_EXPORT DescribeClusterOperationResponse : public KafkaResponse {
    Q_OBJECT

public:
    DescribeClusterOperationResponse(const DescribeClusterOperationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClusterOperationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterOperationResponse)
    Q_DISABLE_COPY(DescribeClusterOperationResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
