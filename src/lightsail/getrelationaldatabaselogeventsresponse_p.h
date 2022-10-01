// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASELOGEVENTSRESPONSE_P_H
#define QTAWS_GETRELATIONALDATABASELOGEVENTSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseLogEventsResponse;

class GetRelationalDatabaseLogEventsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetRelationalDatabaseLogEventsResponsePrivate(GetRelationalDatabaseLogEventsResponse * const q);

    void parseGetRelationalDatabaseLogEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseLogEventsResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseLogEventsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
