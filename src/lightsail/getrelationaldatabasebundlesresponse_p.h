// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEBUNDLESRESPONSE_P_H
#define QTAWS_GETRELATIONALDATABASEBUNDLESRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseBundlesResponse;

class GetRelationalDatabaseBundlesResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetRelationalDatabaseBundlesResponsePrivate(GetRelationalDatabaseBundlesResponse * const q);

    void parseGetRelationalDatabaseBundlesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseBundlesResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseBundlesResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
