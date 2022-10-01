// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYPAIRSRESPONSE_P_H
#define QTAWS_GETKEYPAIRSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetKeyPairsResponse;

class GetKeyPairsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetKeyPairsResponsePrivate(GetKeyPairsResponse * const q);

    void parseGetKeyPairsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetKeyPairsResponse)
    Q_DISABLE_COPY(GetKeyPairsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
