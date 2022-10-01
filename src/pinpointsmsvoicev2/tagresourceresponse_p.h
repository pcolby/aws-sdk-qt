// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCERESPONSE_P_H
#define QTAWS_TAGRESOURCERESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class TagResourceResponse;

class TagResourceResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit TagResourceResponsePrivate(TagResourceResponse * const q);

    void parseTagResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagResourceResponse)
    Q_DISABLE_COPY(TagResourceResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
