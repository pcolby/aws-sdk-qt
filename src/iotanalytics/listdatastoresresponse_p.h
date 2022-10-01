// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASTORESRESPONSE_P_H
#define QTAWS_LISTDATASTORESRESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class ListDatastoresResponse;

class ListDatastoresResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit ListDatastoresResponsePrivate(ListDatastoresResponse * const q);

    void parseListDatastoresResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDatastoresResponse)
    Q_DISABLE_COPY(ListDatastoresResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
