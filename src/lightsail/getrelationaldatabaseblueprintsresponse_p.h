// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEBLUEPRINTSRESPONSE_P_H
#define QTAWS_GETRELATIONALDATABASEBLUEPRINTSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseBlueprintsResponse;

class GetRelationalDatabaseBlueprintsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetRelationalDatabaseBlueprintsResponsePrivate(GetRelationalDatabaseBlueprintsResponse * const q);

    void parseGetRelationalDatabaseBlueprintsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseBlueprintsResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseBlueprintsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
