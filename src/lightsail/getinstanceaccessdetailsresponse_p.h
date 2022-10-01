// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEACCESSDETAILSRESPONSE_P_H
#define QTAWS_GETINSTANCEACCESSDETAILSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceAccessDetailsResponse;

class GetInstanceAccessDetailsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetInstanceAccessDetailsResponsePrivate(GetInstanceAccessDetailsResponse * const q);

    void parseGetInstanceAccessDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInstanceAccessDetailsResponse)
    Q_DISABLE_COPY(GetInstanceAccessDetailsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
