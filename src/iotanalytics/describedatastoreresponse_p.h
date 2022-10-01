// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASTORERESPONSE_P_H
#define QTAWS_DESCRIBEDATASTORERESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class DescribeDatastoreResponse;

class DescribeDatastoreResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit DescribeDatastoreResponsePrivate(DescribeDatastoreResponse * const q);

    void parseDescribeDatastoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDatastoreResponse)
    Q_DISABLE_COPY(DescribeDatastoreResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
