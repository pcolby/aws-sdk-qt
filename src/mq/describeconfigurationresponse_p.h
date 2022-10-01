// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBECONFIGURATIONRESPONSE_P_H

#include "mqresponse_p.h"

namespace QtAws {
namespace Mq {

class DescribeConfigurationResponse;

class DescribeConfigurationResponsePrivate : public MqResponsePrivate {

public:

    explicit DescribeConfigurationResponsePrivate(DescribeConfigurationResponse * const q);

    void parseDescribeConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationResponse)
    Q_DISABLE_COPY(DescribeConfigurationResponsePrivate)

};

} // namespace Mq
} // namespace QtAws

#endif
