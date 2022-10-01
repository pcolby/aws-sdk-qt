// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREALTIMELOGCONFIGRESPONSE_P_H
#define QTAWS_DELETEREALTIMELOGCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class DeleteRealtimeLogConfigResponse;

class DeleteRealtimeLogConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit DeleteRealtimeLogConfigResponsePrivate(DeleteRealtimeLogConfigResponse * const q);

    void parseDeleteRealtimeLogConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRealtimeLogConfigResponse)
    Q_DISABLE_COPY(DeleteRealtimeLogConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
