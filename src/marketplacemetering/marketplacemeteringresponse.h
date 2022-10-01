// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACEMETERINGRESPONSE_H
#define QTAWS_MARKETPLACEMETERINGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmarketplacemeteringglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MarketplaceMetering {

class MarketplaceMeteringResponsePrivate;

class QTAWSMARKETPLACEMETERING_EXPORT MarketplaceMeteringResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MarketplaceMeteringResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MarketplaceMeteringResponse(MarketplaceMeteringResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MarketplaceMeteringResponse)
    Q_DISABLE_COPY(MarketplaceMeteringResponse)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
