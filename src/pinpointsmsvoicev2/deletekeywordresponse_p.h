// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYWORDRESPONSE_P_H
#define QTAWS_DELETEKEYWORDRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteKeywordResponse;

class DeleteKeywordResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DeleteKeywordResponsePrivate(DeleteKeywordResponse * const q);

    void parseDeleteKeywordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteKeywordResponse)
    Q_DISABLE_COPY(DeleteKeywordResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
