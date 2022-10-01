// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHSTATICIPRESPONSE_P_H
#define QTAWS_DETACHSTATICIPRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DetachStaticIpResponse;

class DetachStaticIpResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DetachStaticIpResponsePrivate(DetachStaticIpResponse * const q);

    void parseDetachStaticIpResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachStaticIpResponse)
    Q_DISABLE_COPY(DetachStaticIpResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
