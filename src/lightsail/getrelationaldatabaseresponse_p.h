// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASERESPONSE_P_H
#define QTAWS_GETRELATIONALDATABASERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseResponse;

class GetRelationalDatabaseResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetRelationalDatabaseResponsePrivate(GetRelationalDatabaseResponse * const q);

    void parseGetRelationalDatabaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
