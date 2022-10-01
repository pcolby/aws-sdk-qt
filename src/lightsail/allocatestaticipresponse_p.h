// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATESTATICIPRESPONSE_P_H
#define QTAWS_ALLOCATESTATICIPRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class AllocateStaticIpResponse;

class AllocateStaticIpResponsePrivate : public LightsailResponsePrivate {

public:

    explicit AllocateStaticIpResponsePrivate(AllocateStaticIpResponse * const q);

    void parseAllocateStaticIpResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AllocateStaticIpResponse)
    Q_DISABLE_COPY(AllocateStaticIpResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
