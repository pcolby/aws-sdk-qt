// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHSTATICIPRESPONSE_P_H
#define QTAWS_ATTACHSTATICIPRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class AttachStaticIpResponse;

class AttachStaticIpResponsePrivate : public LightsailResponsePrivate {

public:

    explicit AttachStaticIpResponsePrivate(AttachStaticIpResponse * const q);

    void parseAttachStaticIpResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachStaticIpResponse)
    Q_DISABLE_COPY(AttachStaticIpResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
