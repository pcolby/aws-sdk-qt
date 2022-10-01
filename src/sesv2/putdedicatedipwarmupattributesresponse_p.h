// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDEDICATEDIPWARMUPATTRIBUTESRESPONSE_P_H
#define QTAWS_PUTDEDICATEDIPWARMUPATTRIBUTESRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class PutDedicatedIpWarmupAttributesResponse;

class PutDedicatedIpWarmupAttributesResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit PutDedicatedIpWarmupAttributesResponsePrivate(PutDedicatedIpWarmupAttributesResponse * const q);

    void parsePutDedicatedIpWarmupAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutDedicatedIpWarmupAttributesResponse)
    Q_DISABLE_COPY(PutDedicatedIpWarmupAttributesResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
