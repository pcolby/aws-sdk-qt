// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUNDLESRESPONSE_P_H
#define QTAWS_GETBUNDLESRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetBundlesResponse;

class GetBundlesResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetBundlesResponsePrivate(GetBundlesResponse * const q);

    void parseGetBundlesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBundlesResponse)
    Q_DISABLE_COPY(GetBundlesResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
