// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINENTRYRESPONSE_P_H
#define QTAWS_CREATEDOMAINENTRYRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateDomainEntryResponse;

class CreateDomainEntryResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateDomainEntryResponsePrivate(CreateDomainEntryResponse * const q);

    void parseCreateDomainEntryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDomainEntryResponse)
    Q_DISABLE_COPY(CreateDomainEntryResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
