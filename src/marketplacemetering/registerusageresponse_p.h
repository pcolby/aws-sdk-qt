// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERUSAGERESPONSE_P_H
#define QTAWS_REGISTERUSAGERESPONSE_P_H

#include "marketplacemeteringresponse_p.h"

namespace QtAws {
namespace MarketplaceMetering {

class RegisterUsageResponse;

class RegisterUsageResponsePrivate : public MarketplaceMeteringResponsePrivate {

public:

    explicit RegisterUsageResponsePrivate(RegisterUsageResponse * const q);

    void parseRegisterUsageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterUsageResponse)
    Q_DISABLE_COPY(RegisterUsageResponsePrivate)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
