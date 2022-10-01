// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIPLEXESRESPONSE_P_H
#define QTAWS_LISTMULTIPLEXESRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class ListMultiplexesResponse;

class ListMultiplexesResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit ListMultiplexesResponsePrivate(ListMultiplexesResponse * const q);

    void parseListMultiplexesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMultiplexesResponse)
    Q_DISABLE_COPY(ListMultiplexesResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
