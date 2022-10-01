// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELONGTERMPRICINGRESPONSE_P_H
#define QTAWS_CREATELONGTERMPRICINGRESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class CreateLongTermPricingResponse;

class CreateLongTermPricingResponsePrivate : public SnowballResponsePrivate {

public:

    explicit CreateLongTermPricingResponsePrivate(CreateLongTermPricingResponse * const q);

    void parseCreateLongTermPricingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLongTermPricingResponse)
    Q_DISABLE_COPY(CreateLongTermPricingResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
