// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISKRESPONSE_P_H
#define QTAWS_GETDISKRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetDiskResponse;

class GetDiskResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetDiskResponsePrivate(GetDiskResponse * const q);

    void parseGetDiskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDiskResponse)
    Q_DISABLE_COPY(GetDiskResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
