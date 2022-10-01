// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASESRESPONSE_P_H
#define QTAWS_GETRELATIONALDATABASESRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabasesResponse;

class GetRelationalDatabasesResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetRelationalDatabasesResponsePrivate(GetRelationalDatabasesResponse * const q);

    void parseGetRelationalDatabasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabasesResponse)
    Q_DISABLE_COPY(GetRelationalDatabasesResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
