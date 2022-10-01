// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREALTIMELOGCONFIGRESPONSE_P_H
#define QTAWS_CREATEREALTIMELOGCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreateRealtimeLogConfigResponse;

class CreateRealtimeLogConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreateRealtimeLogConfigResponsePrivate(CreateRealtimeLogConfigResponse * const q);

    void parseCreateRealtimeLogConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRealtimeLogConfigResponse)
    Q_DISABLE_COPY(CreateRealtimeLogConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
