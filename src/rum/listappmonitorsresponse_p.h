// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPMONITORSRESPONSE_P_H
#define QTAWS_LISTAPPMONITORSRESPONSE_P_H

#include "rumresponse_p.h"

namespace QtAws {
namespace Rum {

class ListAppMonitorsResponse;

class ListAppMonitorsResponsePrivate : public RumResponsePrivate {

public:

    explicit ListAppMonitorsResponsePrivate(ListAppMonitorsResponse * const q);

    void parseListAppMonitorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppMonitorsResponse)
    Q_DISABLE_COPY(ListAppMonitorsResponsePrivate)

};

} // namespace Rum
} // namespace QtAws

#endif
