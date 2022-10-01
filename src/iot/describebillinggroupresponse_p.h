// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBILLINGGROUPRESPONSE_P_H
#define QTAWS_DESCRIBEBILLINGGROUPRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeBillingGroupResponse;

class DescribeBillingGroupResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeBillingGroupResponsePrivate(DescribeBillingGroupResponse * const q);

    void parseDescribeBillingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBillingGroupResponse)
    Q_DISABLE_COPY(DescribeBillingGroupResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
