// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASELOGSTREAMSRESPONSE_P_H
#define QTAWS_GETRELATIONALDATABASELOGSTREAMSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseLogStreamsResponse;

class GetRelationalDatabaseLogStreamsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetRelationalDatabaseLogStreamsResponsePrivate(GetRelationalDatabaseLogStreamsResponse * const q);

    void parseGetRelationalDatabaseLogStreamsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseLogStreamsResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseLogStreamsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
