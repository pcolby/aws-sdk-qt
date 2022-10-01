// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSETRESPONSE_P_H
#define QTAWS_GETASSETRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class GetAssetResponse;

class GetAssetResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit GetAssetResponsePrivate(GetAssetResponse * const q);

    void parseGetAssetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAssetResponse)
    Q_DISABLE_COPY(GetAssetResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
