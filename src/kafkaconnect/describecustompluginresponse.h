// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMPLUGINRESPONSE_H
#define QTAWS_DESCRIBECUSTOMPLUGINRESPONSE_H

#include "kafkaconnectresponse.h"
#include "describecustompluginrequest.h"

namespace QtAws {
namespace KafkaConnect {

class DescribeCustomPluginResponsePrivate;

class QTAWSKAFKACONNECT_EXPORT DescribeCustomPluginResponse : public KafkaConnectResponse {
    Q_OBJECT

public:
    DescribeCustomPluginResponse(const DescribeCustomPluginRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCustomPluginRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomPluginResponse)
    Q_DISABLE_COPY(DescribeCustomPluginResponse)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
