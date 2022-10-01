// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHDISKRESPONSE_P_H
#define QTAWS_DETACHDISKRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DetachDiskResponse;

class DetachDiskResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DetachDiskResponsePrivate(DetachDiskResponse * const q);

    void parseDetachDiskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachDiskResponse)
    Q_DISABLE_COPY(DetachDiskResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
