// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMESSAGESRESPONSE_P_H
#define QTAWS_LISTCHANNELMESSAGESRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListChannelMessagesResponse;

class ListChannelMessagesResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListChannelMessagesResponsePrivate(ListChannelMessagesResponse * const q);

    void parseListChannelMessagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChannelMessagesResponse)
    Q_DISABLE_COPY(ListChannelMessagesResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
