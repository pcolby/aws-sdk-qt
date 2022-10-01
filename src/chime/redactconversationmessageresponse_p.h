// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDACTCONVERSATIONMESSAGERESPONSE_P_H
#define QTAWS_REDACTCONVERSATIONMESSAGERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class RedactConversationMessageResponse;

class RedactConversationMessageResponsePrivate : public ChimeResponsePrivate {

public:

    explicit RedactConversationMessageResponsePrivate(RedactConversationMessageResponse * const q);

    void parseRedactConversationMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RedactConversationMessageResponse)
    Q_DISABLE_COPY(RedactConversationMessageResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
