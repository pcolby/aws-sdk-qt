// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINSTANCEPUBLICPORTSRESPONSE_P_H
#define QTAWS_PUTINSTANCEPUBLICPORTSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class PutInstancePublicPortsResponse;

class PutInstancePublicPortsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit PutInstancePublicPortsResponsePrivate(PutInstancePublicPortsResponse * const q);

    void parsePutInstancePublicPortsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutInstancePublicPortsResponse)
    Q_DISABLE_COPY(PutInstancePublicPortsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
