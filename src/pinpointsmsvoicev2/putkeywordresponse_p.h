// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTKEYWORDRESPONSE_P_H
#define QTAWS_PUTKEYWORDRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class PutKeywordResponse;

class PutKeywordResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit PutKeywordResponsePrivate(PutKeywordResponse * const q);

    void parsePutKeywordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutKeywordResponse)
    Q_DISABLE_COPY(PutKeywordResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
