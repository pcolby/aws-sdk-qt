// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERELATIONALDATABASERESPONSE_P_H
#define QTAWS_CREATERELATIONALDATABASERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateRelationalDatabaseResponse;

class CreateRelationalDatabaseResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateRelationalDatabaseResponsePrivate(CreateRelationalDatabaseResponse * const q);

    void parseCreateRelationalDatabaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRelationalDatabaseResponse)
    Q_DISABLE_COPY(CreateRelationalDatabaseResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
