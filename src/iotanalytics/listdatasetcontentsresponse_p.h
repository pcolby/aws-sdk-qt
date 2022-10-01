// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETCONTENTSRESPONSE_P_H
#define QTAWS_LISTDATASETCONTENTSRESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class ListDatasetContentsResponse;

class ListDatasetContentsResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit ListDatasetContentsResponsePrivate(ListDatasetContentsResponse * const q);

    void parseListDatasetContentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDatasetContentsResponse)
    Q_DISABLE_COPY(ListDatasetContentsResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
