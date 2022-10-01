// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACEMETERINGRESPONSE_P_H
#define QTAWS_MARKETPLACEMETERINGRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MarketplaceMetering {

class MarketplaceMeteringResponse;

class MarketplaceMeteringResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MarketplaceMeteringResponsePrivate(MarketplaceMeteringResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MarketplaceMeteringResponse)
    Q_DISABLE_COPY(MarketplaceMeteringResponsePrivate)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
