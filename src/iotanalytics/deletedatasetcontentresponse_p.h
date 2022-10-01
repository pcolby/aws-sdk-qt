// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETCONTENTRESPONSE_P_H
#define QTAWS_DELETEDATASETCONTENTRESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class DeleteDatasetContentResponse;

class DeleteDatasetContentResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit DeleteDatasetContentResponsePrivate(DeleteDatasetContentResponse * const q);

    void parseDeleteDatasetContentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDatasetContentResponse)
    Q_DISABLE_COPY(DeleteDatasetContentResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
