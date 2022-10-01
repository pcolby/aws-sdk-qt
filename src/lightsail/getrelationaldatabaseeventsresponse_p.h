// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEEVENTSRESPONSE_P_H
#define QTAWS_GETRELATIONALDATABASEEVENTSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseEventsResponse;

class GetRelationalDatabaseEventsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetRelationalDatabaseEventsResponsePrivate(GetRelationalDatabaseEventsResponse * const q);

    void parseGetRelationalDatabaseEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseEventsResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseEventsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
