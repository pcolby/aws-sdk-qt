// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCESRESPONSE_P_H
#define QTAWS_CREATEINSTANCESRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateInstancesResponse;

class CreateInstancesResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateInstancesResponsePrivate(CreateInstancesResponse * const q);

    void parseCreateInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInstancesResponse)
    Q_DISABLE_COPY(CreateInstancesResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
