// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCHANGESETRESPONSE_H
#define QTAWS_STARTCHANGESETRESPONSE_H

#include "marketplacecatalogresponse.h"
#include "startchangesetrequest.h"

namespace QtAws {
namespace MarketplaceCatalog {

class StartChangeSetResponsePrivate;

class QTAWSMARKETPLACECATALOG_EXPORT StartChangeSetResponse : public MarketplaceCatalogResponse {
    Q_OBJECT

public:
    StartChangeSetResponse(const StartChangeSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartChangeSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartChangeSetResponse)
    Q_DISABLE_COPY(StartChangeSetResponse)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
