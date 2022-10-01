// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTANALYTICSRESPONSE_P_H
#define QTAWS_IOTANALYTICSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class IoTAnalyticsResponse;

class IoTAnalyticsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IoTAnalyticsResponsePrivate(IoTAnalyticsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IoTAnalyticsResponse)
    Q_DISABLE_COPY(IoTAnalyticsResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
