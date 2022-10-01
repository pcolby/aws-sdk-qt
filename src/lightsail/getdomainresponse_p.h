// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINRESPONSE_P_H
#define QTAWS_GETDOMAINRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetDomainResponse;

class GetDomainResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetDomainResponsePrivate(GetDomainResponse * const q);

    void parseGetDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDomainResponse)
    Q_DISABLE_COPY(GetDomainResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
