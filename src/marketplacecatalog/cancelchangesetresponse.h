// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCHANGESETRESPONSE_H
#define QTAWS_CANCELCHANGESETRESPONSE_H

#include "marketplacecatalogresponse.h"
#include "cancelchangesetrequest.h"

namespace QtAws {
namespace MarketplaceCatalog {

class CancelChangeSetResponsePrivate;

class QTAWSMARKETPLACECATALOG_EXPORT CancelChangeSetResponse : public MarketplaceCatalogResponse {
    Q_OBJECT

public:
    CancelChangeSetResponse(const CancelChangeSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelChangeSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelChangeSetResponse)
    Q_DISABLE_COPY(CancelChangeSetResponse)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
