// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACECATALOGRESPONSE_H
#define QTAWS_MARKETPLACECATALOGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmarketplacecatalogglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MarketplaceCatalog {

class MarketplaceCatalogResponsePrivate;

class QTAWSMARKETPLACECATALOG_EXPORT MarketplaceCatalogResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MarketplaceCatalogResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MarketplaceCatalogResponse(MarketplaceCatalogResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MarketplaceCatalogResponse)
    Q_DISABLE_COPY(MarketplaceCatalogResponse)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
