// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDEDICATEDIPWARMUPATTRIBUTESRESPONSE_P_H
#define QTAWS_PUTDEDICATEDIPWARMUPATTRIBUTESRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class PutDedicatedIpWarmupAttributesResponse;

class PutDedicatedIpWarmupAttributesResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit PutDedicatedIpWarmupAttributesResponsePrivate(PutDedicatedIpWarmupAttributesResponse * const q);

    void parsePutDedicatedIpWarmupAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutDedicatedIpWarmupAttributesResponse)
    Q_DISABLE_COPY(PutDedicatedIpWarmupAttributesResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
