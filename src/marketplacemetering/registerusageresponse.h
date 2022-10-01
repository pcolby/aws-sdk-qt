// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERUSAGERESPONSE_H
#define QTAWS_REGISTERUSAGERESPONSE_H

#include "marketplacemeteringresponse.h"
#include "registerusagerequest.h"

namespace QtAws {
namespace MarketplaceMetering {

class RegisterUsageResponsePrivate;

class QTAWSMARKETPLACEMETERING_EXPORT RegisterUsageResponse : public MarketplaceMeteringResponse {
    Q_OBJECT

public:
    RegisterUsageResponse(const RegisterUsageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterUsageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterUsageResponse)
    Q_DISABLE_COPY(RegisterUsageResponse)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
