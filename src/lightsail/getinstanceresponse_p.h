// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCERESPONSE_P_H
#define QTAWS_GETINSTANCERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceResponse;

class GetInstanceResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetInstanceResponsePrivate(GetInstanceResponse * const q);

    void parseGetInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInstanceResponse)
    Q_DISABLE_COPY(GetInstanceResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
