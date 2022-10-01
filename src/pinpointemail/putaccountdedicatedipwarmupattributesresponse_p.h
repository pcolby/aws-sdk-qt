// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTDEDICATEDIPWARMUPATTRIBUTESRESPONSE_P_H
#define QTAWS_PUTACCOUNTDEDICATEDIPWARMUPATTRIBUTESRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class PutAccountDedicatedIpWarmupAttributesResponse;

class PutAccountDedicatedIpWarmupAttributesResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit PutAccountDedicatedIpWarmupAttributesResponsePrivate(PutAccountDedicatedIpWarmupAttributesResponse * const q);

    void parsePutAccountDedicatedIpWarmupAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAccountDedicatedIpWarmupAttributesResponse)
    Q_DISABLE_COPY(PutAccountDedicatedIpWarmupAttributesResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
