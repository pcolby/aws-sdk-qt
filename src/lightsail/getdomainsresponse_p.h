// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINSRESPONSE_P_H
#define QTAWS_GETDOMAINSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetDomainsResponse;

class GetDomainsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetDomainsResponsePrivate(GetDomainsResponse * const q);

    void parseGetDomainsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDomainsResponse)
    Q_DISABLE_COPY(GetDomainsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
