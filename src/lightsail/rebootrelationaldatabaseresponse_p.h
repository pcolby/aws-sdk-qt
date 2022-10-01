// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTRELATIONALDATABASERESPONSE_P_H
#define QTAWS_REBOOTRELATIONALDATABASERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class RebootRelationalDatabaseResponse;

class RebootRelationalDatabaseResponsePrivate : public LightsailResponsePrivate {

public:

    explicit RebootRelationalDatabaseResponsePrivate(RebootRelationalDatabaseResponse * const q);

    void parseRebootRelationalDatabaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RebootRelationalDatabaseResponse)
    Q_DISABLE_COPY(RebootRelationalDatabaseResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
