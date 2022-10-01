// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATICIPRESPONSE_P_H
#define QTAWS_GETSTATICIPRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetStaticIpResponse;

class GetStaticIpResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetStaticIpResponsePrivate(GetStaticIpResponse * const q);

    void parseGetStaticIpResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStaticIpResponse)
    Q_DISABLE_COPY(GetStaticIpResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
