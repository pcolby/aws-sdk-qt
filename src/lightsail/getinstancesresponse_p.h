// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESRESPONSE_P_H
#define QTAWS_GETINSTANCESRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetInstancesResponse;

class GetInstancesResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetInstancesResponsePrivate(GetInstancesResponse * const q);

    void parseGetInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInstancesResponse)
    Q_DISABLE_COPY(GetInstancesResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
