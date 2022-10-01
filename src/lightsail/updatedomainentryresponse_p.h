// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINENTRYRESPONSE_P_H
#define QTAWS_UPDATEDOMAINENTRYRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class UpdateDomainEntryResponse;

class UpdateDomainEntryResponsePrivate : public LightsailResponsePrivate {

public:

    explicit UpdateDomainEntryResponsePrivate(UpdateDomainEntryResponse * const q);

    void parseUpdateDomainEntryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDomainEntryResponse)
    Q_DISABLE_COPY(UpdateDomainEntryResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
