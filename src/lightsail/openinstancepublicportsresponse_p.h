// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPENINSTANCEPUBLICPORTSRESPONSE_P_H
#define QTAWS_OPENINSTANCEPUBLICPORTSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class OpenInstancePublicPortsResponse;

class OpenInstancePublicPortsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit OpenInstancePublicPortsResponsePrivate(OpenInstancePublicPortsResponse * const q);

    void parseOpenInstancePublicPortsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(OpenInstancePublicPortsResponse)
    Q_DISABLE_COPY(OpenInstancePublicPortsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
