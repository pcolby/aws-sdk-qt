// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRELATIONALDATABASERESPONSE_P_H
#define QTAWS_STARTRELATIONALDATABASERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class StartRelationalDatabaseResponse;

class StartRelationalDatabaseResponsePrivate : public LightsailResponsePrivate {

public:

    explicit StartRelationalDatabaseResponsePrivate(StartRelationalDatabaseResponse * const q);

    void parseStartRelationalDatabaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartRelationalDatabaseResponse)
    Q_DISABLE_COPY(StartRelationalDatabaseResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
