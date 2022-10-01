// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELCLASSRESPONSE_P_H
#define QTAWS_UPDATECHANNELCLASSRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class UpdateChannelClassResponse;

class UpdateChannelClassResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit UpdateChannelClassResponsePrivate(UpdateChannelClassResponse * const q);

    void parseUpdateChannelClassResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateChannelClassResponse)
    Q_DISABLE_COPY(UpdateChannelClassResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
