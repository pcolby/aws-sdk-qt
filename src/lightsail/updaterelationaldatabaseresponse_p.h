// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERELATIONALDATABASERESPONSE_P_H
#define QTAWS_UPDATERELATIONALDATABASERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class UpdateRelationalDatabaseResponse;

class UpdateRelationalDatabaseResponsePrivate : public LightsailResponsePrivate {

public:

    explicit UpdateRelationalDatabaseResponsePrivate(UpdateRelationalDatabaseResponse * const q);

    void parseUpdateRelationalDatabaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRelationalDatabaseResponse)
    Q_DISABLE_COPY(UpdateRelationalDatabaseResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
