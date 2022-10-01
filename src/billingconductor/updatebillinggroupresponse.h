// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBILLINGGROUPRESPONSE_H
#define QTAWS_UPDATEBILLINGGROUPRESPONSE_H

#include "billingconductorresponse.h"
#include "updatebillinggrouprequest.h"

namespace QtAws {
namespace BillingConductor {

class UpdateBillingGroupResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT UpdateBillingGroupResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    UpdateBillingGroupResponse(const UpdateBillingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBillingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBillingGroupResponse)
    Q_DISABLE_COPY(UpdateBillingGroupResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
