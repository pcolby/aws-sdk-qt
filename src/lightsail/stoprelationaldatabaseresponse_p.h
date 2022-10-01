// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRELATIONALDATABASERESPONSE_P_H
#define QTAWS_STOPRELATIONALDATABASERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class StopRelationalDatabaseResponse;

class StopRelationalDatabaseResponsePrivate : public LightsailResponsePrivate {

public:

    explicit StopRelationalDatabaseResponsePrivate(StopRelationalDatabaseResponse * const q);

    void parseStopRelationalDatabaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopRelationalDatabaseResponse)
    Q_DISABLE_COPY(StopRelationalDatabaseResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
