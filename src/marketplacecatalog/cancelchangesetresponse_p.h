// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCHANGESETRESPONSE_P_H
#define QTAWS_CANCELCHANGESETRESPONSE_P_H

#include "marketplacecatalogresponse_p.h"

namespace QtAws {
namespace MarketplaceCatalog {

class CancelChangeSetResponse;

class CancelChangeSetResponsePrivate : public MarketplaceCatalogResponsePrivate {

public:

    explicit CancelChangeSetResponsePrivate(CancelChangeSetResponse * const q);

    void parseCancelChangeSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelChangeSetResponse)
    Q_DISABLE_COPY(CancelChangeSetResponsePrivate)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
