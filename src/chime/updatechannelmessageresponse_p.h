// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELMESSAGERESPONSE_P_H
#define QTAWS_UPDATECHANNELMESSAGERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdateChannelMessageResponse;

class UpdateChannelMessageResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdateChannelMessageResponsePrivate(UpdateChannelMessageResponse * const q);

    void parseUpdateChannelMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateChannelMessageResponse)
    Q_DISABLE_COPY(UpdateChannelMessageResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
