// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHDISKRESPONSE_P_H
#define QTAWS_ATTACHDISKRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class AttachDiskResponse;

class AttachDiskResponsePrivate : public LightsailResponsePrivate {

public:

    explicit AttachDiskResponsePrivate(AttachDiskResponse * const q);

    void parseAttachDiskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachDiskResponse)
    Q_DISABLE_COPY(AttachDiskResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
