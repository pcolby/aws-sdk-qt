// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMULTIPLEXRESPONSE_P_H
#define QTAWS_UPDATEMULTIPLEXRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class UpdateMultiplexResponse;

class UpdateMultiplexResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit UpdateMultiplexResponsePrivate(UpdateMultiplexResponse * const q);

    void parseUpdateMultiplexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMultiplexResponse)
    Q_DISABLE_COPY(UpdateMultiplexResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
