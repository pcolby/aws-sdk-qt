// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETRESPONSE_P_H
#define QTAWS_UPDATEDATASETRESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class UpdateDatasetResponse;

class UpdateDatasetResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit UpdateDatasetResponsePrivate(UpdateDatasetResponse * const q);

    void parseUpdateDatasetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDatasetResponse)
    Q_DISABLE_COPY(UpdateDatasetResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
