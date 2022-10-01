// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINENTRYRESPONSE_P_H
#define QTAWS_DELETEDOMAINENTRYRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DeleteDomainEntryResponse;

class DeleteDomainEntryResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DeleteDomainEntryResponsePrivate(DeleteDomainEntryResponse * const q);

    void parseDeleteDomainEntryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDomainEntryResponse)
    Q_DISABLE_COPY(DeleteDomainEntryResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
