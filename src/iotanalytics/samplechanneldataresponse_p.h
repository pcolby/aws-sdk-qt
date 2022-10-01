// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAMPLECHANNELDATARESPONSE_P_H
#define QTAWS_SAMPLECHANNELDATARESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class SampleChannelDataResponse;

class SampleChannelDataResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit SampleChannelDataResponsePrivate(SampleChannelDataResponse * const q);

    void parseSampleChannelDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SampleChannelDataResponse)
    Q_DISABLE_COPY(SampleChannelDataResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
