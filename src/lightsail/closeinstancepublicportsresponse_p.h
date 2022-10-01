// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOSEINSTANCEPUBLICPORTSRESPONSE_P_H
#define QTAWS_CLOSEINSTANCEPUBLICPORTSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CloseInstancePublicPortsResponse;

class CloseInstancePublicPortsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CloseInstancePublicPortsResponsePrivate(CloseInstancePublicPortsResponse * const q);

    void parseCloseInstancePublicPortsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloseInstancePublicPortsResponse)
    Q_DISABLE_COPY(CloseInstancePublicPortsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
