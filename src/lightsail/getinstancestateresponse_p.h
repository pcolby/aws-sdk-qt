// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESTATERESPONSE_P_H
#define QTAWS_GETINSTANCESTATERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceStateResponse;

class GetInstanceStateResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetInstanceStateResponsePrivate(GetInstanceStateResponse * const q);

    void parseGetInstanceStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInstanceStateResponse)
    Q_DISABLE_COPY(GetInstanceStateResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
