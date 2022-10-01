// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDAPIASSETRESPONSE_P_H
#define QTAWS_SENDAPIASSETRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class SendApiAssetResponse;

class SendApiAssetResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit SendApiAssetResponsePrivate(SendApiAssetResponse * const q);

    void parseSendApiAssetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendApiAssetResponse)
    Q_DISABLE_COPY(SendApiAssetResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
