// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLONGTERMPRICINGRESPONSE_P_H
#define QTAWS_LISTLONGTERMPRICINGRESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class ListLongTermPricingResponse;

class ListLongTermPricingResponsePrivate : public SnowballResponsePrivate {

public:

    explicit ListLongTermPricingResponsePrivate(ListLongTermPricingResponse * const q);

    void parseListLongTermPricingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLongTermPricingResponse)
    Q_DISABLE_COPY(ListLongTermPricingResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
