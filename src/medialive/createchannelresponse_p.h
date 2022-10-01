// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELRESPONSE_P_H
#define QTAWS_CREATECHANNELRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class CreateChannelResponse;

class CreateChannelResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit CreateChannelResponsePrivate(CreateChannelResponse * const q);

    void parseCreateChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateChannelResponse)
    Q_DISABLE_COPY(CreateChannelResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
