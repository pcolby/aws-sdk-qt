// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMETRICVALUESRESPONSE_P_H
#define QTAWS_LISTMETRICVALUESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListMetricValuesResponse;

class ListMetricValuesResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListMetricValuesResponsePrivate(ListMetricValuesResponse * const q);

    void parseListMetricValuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMetricValuesResponse)
    Q_DISABLE_COPY(ListMetricValuesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
