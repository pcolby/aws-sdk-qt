// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASESTATICIPRESPONSE_P_H
#define QTAWS_RELEASESTATICIPRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class ReleaseStaticIpResponse;

class ReleaseStaticIpResponsePrivate : public LightsailResponsePrivate {

public:

    explicit ReleaseStaticIpResponsePrivate(ReleaseStaticIpResponse * const q);

    void parseReleaseStaticIpResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReleaseStaticIpResponse)
    Q_DISABLE_COPY(ReleaseStaticIpResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
