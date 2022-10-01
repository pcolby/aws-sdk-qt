// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETCONTENTRESPONSE_P_H
#define QTAWS_CREATEDATASETCONTENTRESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class CreateDatasetContentResponse;

class CreateDatasetContentResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit CreateDatasetContentResponsePrivate(CreateDatasetContentResponse * const q);

    void parseCreateDatasetContentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDatasetContentResponse)
    Q_DISABLE_COPY(CreateDatasetContentResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
