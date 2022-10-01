// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBILLINGGROUPRESPONSE_P_H
#define QTAWS_DELETEBILLINGGROUPRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class DeleteBillingGroupResponse;

class DeleteBillingGroupResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit DeleteBillingGroupResponsePrivate(DeleteBillingGroupResponse * const q);

    void parseDeleteBillingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBillingGroupResponse)
    Q_DISABLE_COPY(DeleteBillingGroupResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
