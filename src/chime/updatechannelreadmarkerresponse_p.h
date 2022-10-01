// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELREADMARKERRESPONSE_P_H
#define QTAWS_UPDATECHANNELREADMARKERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdateChannelReadMarkerResponse;

class UpdateChannelReadMarkerResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdateChannelReadMarkerResponsePrivate(UpdateChannelReadMarkerResponse * const q);

    void parseUpdateChannelReadMarkerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateChannelReadMarkerResponse)
    Q_DISABLE_COPY(UpdateChannelReadMarkerResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
