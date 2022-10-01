// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYPAIRRESPONSE_P_H
#define QTAWS_GETKEYPAIRRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetKeyPairResponse;

class GetKeyPairResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetKeyPairResponsePrivate(GetKeyPairResponse * const q);

    void parseGetKeyPairResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetKeyPairResponse)
    Q_DISABLE_COPY(GetKeyPairResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
