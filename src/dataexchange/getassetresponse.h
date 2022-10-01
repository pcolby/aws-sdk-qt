// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSETRESPONSE_H
#define QTAWS_GETASSETRESPONSE_H

#include "dataexchangeresponse.h"
#include "getassetrequest.h"

namespace QtAws {
namespace DataExchange {

class GetAssetResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT GetAssetResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    GetAssetResponse(const GetAssetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAssetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssetResponse)
    Q_DISABLE_COPY(GetAssetResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif
