// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMULTIPLEXPROGRAMRESPONSE_P_H
#define QTAWS_UPDATEMULTIPLEXPROGRAMRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class UpdateMultiplexProgramResponse;

class UpdateMultiplexProgramResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit UpdateMultiplexProgramResponsePrivate(UpdateMultiplexProgramResponse * const q);

    void parseUpdateMultiplexProgramResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMultiplexProgramResponse)
    Q_DISABLE_COPY(UpdateMultiplexProgramResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
