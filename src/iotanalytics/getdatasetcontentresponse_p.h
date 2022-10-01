// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETCONTENTRESPONSE_P_H
#define QTAWS_GETDATASETCONTENTRESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class GetDatasetContentResponse;

class GetDatasetContentResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit GetDatasetContentResponsePrivate(GetDatasetContentResponse * const q);

    void parseGetDatasetContentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDatasetContentResponse)
    Q_DISABLE_COPY(GetDatasetContentResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
