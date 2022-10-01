// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATICIPSRESPONSE_P_H
#define QTAWS_GETSTATICIPSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetStaticIpsResponse;

class GetStaticIpsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetStaticIpsResponsePrivate(GetStaticIpsResponse * const q);

    void parseGetStaticIpsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStaticIpsResponse)
    Q_DISABLE_COPY(GetStaticIpsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
