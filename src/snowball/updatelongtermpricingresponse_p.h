// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELONGTERMPRICINGRESPONSE_P_H
#define QTAWS_UPDATELONGTERMPRICINGRESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class UpdateLongTermPricingResponse;

class UpdateLongTermPricingResponsePrivate : public SnowballResponsePrivate {

public:

    explicit UpdateLongTermPricingResponsePrivate(UpdateLongTermPricingResponse * const q);

    void parseUpdateLongTermPricingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLongTermPricingResponse)
    Q_DISABLE_COPY(UpdateLongTermPricingResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
