// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRACKERCONSUMERSRESPONSE_P_H
#define QTAWS_LISTTRACKERCONSUMERSRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class ListTrackerConsumersResponse;

class ListTrackerConsumersResponsePrivate : public LocationResponsePrivate {

public:

    explicit ListTrackerConsumersResponsePrivate(ListTrackerConsumersResponse * const q);

    void parseListTrackerConsumersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTrackerConsumersResponse)
    Q_DISABLE_COPY(ListTrackerConsumersResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
