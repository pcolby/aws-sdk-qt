// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMPLUGINRESPONSE_P_H
#define QTAWS_DESCRIBECUSTOMPLUGINRESPONSE_P_H

#include "kafkaconnectresponse_p.h"

namespace QtAws {
namespace KafkaConnect {

class DescribeCustomPluginResponse;

class DescribeCustomPluginResponsePrivate : public KafkaConnectResponsePrivate {

public:

    explicit DescribeCustomPluginResponsePrivate(DescribeCustomPluginResponse * const q);

    void parseDescribeCustomPluginResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCustomPluginResponse)
    Q_DISABLE_COPY(DescribeCustomPluginResponsePrivate)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
