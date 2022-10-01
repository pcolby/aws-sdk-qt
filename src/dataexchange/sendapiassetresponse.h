// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDAPIASSETRESPONSE_H
#define QTAWS_SENDAPIASSETRESPONSE_H

#include "dataexchangeresponse.h"
#include "sendapiassetrequest.h"

namespace QtAws {
namespace DataExchange {

class SendApiAssetResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT SendApiAssetResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    SendApiAssetResponse(const SendApiAssetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendApiAssetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendApiAssetResponse)
    Q_DISABLE_COPY(SendApiAssetResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif
