// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCURRENTMETRICDATARESPONSE_P_H
#define QTAWS_GETCURRENTMETRICDATARESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class GetCurrentMetricDataResponse;

class GetCurrentMetricDataResponsePrivate : public ConnectResponsePrivate {

public:

    explicit GetCurrentMetricDataResponsePrivate(GetCurrentMetricDataResponse * const q);

    void parseGetCurrentMetricDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCurrentMetricDataResponse)
    Q_DISABLE_COPY(GetCurrentMetricDataResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
