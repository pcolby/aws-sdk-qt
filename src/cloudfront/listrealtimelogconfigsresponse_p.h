// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREALTIMELOGCONFIGSRESPONSE_P_H
#define QTAWS_LISTREALTIMELOGCONFIGSRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListRealtimeLogConfigsResponse;

class ListRealtimeLogConfigsResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListRealtimeLogConfigsResponsePrivate(ListRealtimeLogConfigsResponse * const q);

    void parseListRealtimeLogConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRealtimeLogConfigsResponse)
    Q_DISABLE_COPY(ListRealtimeLogConfigsResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
