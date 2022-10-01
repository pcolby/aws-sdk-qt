// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISKSRESPONSE_P_H
#define QTAWS_GETDISKSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetDisksResponse;

class GetDisksResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetDisksResponsePrivate(GetDisksResponse * const q);

    void parseGetDisksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDisksResponse)
    Q_DISABLE_COPY(GetDisksResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
