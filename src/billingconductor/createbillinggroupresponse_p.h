// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBILLINGGROUPRESPONSE_P_H
#define QTAWS_CREATEBILLINGGROUPRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class CreateBillingGroupResponse;

class CreateBillingGroupResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit CreateBillingGroupResponsePrivate(CreateBillingGroupResponse * const q);

    void parseCreateBillingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBillingGroupResponse)
    Q_DISABLE_COPY(CreateBillingGroupResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
