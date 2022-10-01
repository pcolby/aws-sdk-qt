// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSETRESPONSE_P_H
#define QTAWS_UPDATEASSETRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class UpdateAssetResponse;

class UpdateAssetResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit UpdateAssetResponsePrivate(UpdateAssetResponse * const q);

    void parseUpdateAssetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAssetResponse)
    Q_DISABLE_COPY(UpdateAssetResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
