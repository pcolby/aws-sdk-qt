// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIPLEXPROGRAMSRESPONSE_P_H
#define QTAWS_LISTMULTIPLEXPROGRAMSRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class ListMultiplexProgramsResponse;

class ListMultiplexProgramsResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit ListMultiplexProgramsResponsePrivate(ListMultiplexProgramsResponse * const q);

    void parseListMultiplexProgramsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMultiplexProgramsResponse)
    Q_DISABLE_COPY(ListMultiplexProgramsResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
