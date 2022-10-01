// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASESCHEDULEDINSTANCESRESPONSE_P_H
#define QTAWS_PURCHASESCHEDULEDINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class PurchaseScheduledInstancesResponse;

class PurchaseScheduledInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit PurchaseScheduledInstancesResponsePrivate(PurchaseScheduledInstancesResponse * const q);

    void parsePurchaseScheduledInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PurchaseScheduledInstancesResponse)
    Q_DISABLE_COPY(PurchaseScheduledInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
