// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCHANGESETRESPONSE_P_H
#define QTAWS_STARTCHANGESETRESPONSE_P_H

#include "marketplacecatalogresponse_p.h"

namespace QtAws {
namespace MarketplaceCatalog {

class StartChangeSetResponse;

class StartChangeSetResponsePrivate : public MarketplaceCatalogResponsePrivate {

public:

    explicit StartChangeSetResponsePrivate(StartChangeSetResponse * const q);

    void parseStartChangeSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartChangeSetResponse)
    Q_DISABLE_COPY(StartChangeSetResponsePrivate)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
