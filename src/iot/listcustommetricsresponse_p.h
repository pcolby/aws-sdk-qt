// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMMETRICSRESPONSE_P_H
#define QTAWS_LISTCUSTOMMETRICSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListCustomMetricsResponse;

class ListCustomMetricsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListCustomMetricsResponsePrivate(ListCustomMetricsResponse * const q);

    void parseListCustomMetricsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCustomMetricsResponse)
    Q_DISABLE_COPY(ListCustomMetricsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
