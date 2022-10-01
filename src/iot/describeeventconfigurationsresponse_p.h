// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTCONFIGURATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEEVENTCONFIGURATIONSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeEventConfigurationsResponse;

class DescribeEventConfigurationsResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeEventConfigurationsResponsePrivate(DescribeEventConfigurationsResponse * const q);

    void parseDescribeEventConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEventConfigurationsResponse)
    Q_DISABLE_COPY(DescribeEventConfigurationsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
