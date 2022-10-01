// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGSRESPONSE_P_H
#define QTAWS_LISTCONFIGSRESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class ListConfigsResponse;

class ListConfigsResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit ListConfigsResponsePrivate(ListConfigsResponse * const q);

    void parseListConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConfigsResponse)
    Q_DISABLE_COPY(ListConfigsResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
