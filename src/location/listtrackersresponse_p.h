// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRACKERSRESPONSE_P_H
#define QTAWS_LISTTRACKERSRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class ListTrackersResponse;

class ListTrackersResponsePrivate : public LocationResponsePrivate {

public:

    explicit ListTrackersResponsePrivate(ListTrackersResponse * const q);

    void parseListTrackersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTrackersResponse)
    Q_DISABLE_COPY(ListTrackersResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
