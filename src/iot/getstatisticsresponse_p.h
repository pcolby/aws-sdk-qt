// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATISTICSRESPONSE_P_H
#define QTAWS_GETSTATISTICSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class GetStatisticsResponse;

class GetStatisticsResponsePrivate : public IoTResponsePrivate {

public:

    explicit GetStatisticsResponsePrivate(GetStatisticsResponse * const q);

    void parseGetStatisticsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStatisticsResponse)
    Q_DISABLE_COPY(GetStatisticsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
