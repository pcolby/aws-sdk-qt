// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLUEPRINTSRESPONSE_P_H
#define QTAWS_GETBLUEPRINTSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetBlueprintsResponse;

class GetBlueprintsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetBlueprintsResponsePrivate(GetBlueprintsResponse * const q);

    void parseGetBlueprintsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBlueprintsResponse)
    Q_DISABLE_COPY(GetBlueprintsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
