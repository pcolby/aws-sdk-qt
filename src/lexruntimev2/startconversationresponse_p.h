// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONVERSATIONRESPONSE_P_H
#define QTAWS_STARTCONVERSATIONRESPONSE_P_H

#include "lexruntimev2response_p.h"

namespace QtAws {
namespace LexRuntimeV2 {

class StartConversationResponse;

class StartConversationResponsePrivate : public LexRuntimeV2ResponsePrivate {

public:

    explicit StartConversationResponsePrivate(StartConversationResponse * const q);

    void parseStartConversationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartConversationResponse)
    Q_DISABLE_COPY(StartConversationResponsePrivate)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
