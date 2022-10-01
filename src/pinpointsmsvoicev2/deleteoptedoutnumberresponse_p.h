// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPTEDOUTNUMBERRESPONSE_P_H
#define QTAWS_DELETEOPTEDOUTNUMBERRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteOptedOutNumberResponse;

class DeleteOptedOutNumberResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DeleteOptedOutNumberResponsePrivate(DeleteOptedOutNumberResponse * const q);

    void parseDeleteOptedOutNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOptedOutNumberResponse)
    Q_DISABLE_COPY(DeleteOptedOutNumberResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
