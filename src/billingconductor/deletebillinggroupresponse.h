// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBILLINGGROUPRESPONSE_H
#define QTAWS_DELETEBILLINGGROUPRESPONSE_H

#include "billingconductorresponse.h"
#include "deletebillinggrouprequest.h"

namespace QtAws {
namespace BillingConductor {

class DeleteBillingGroupResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT DeleteBillingGroupResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    DeleteBillingGroupResponse(const DeleteBillingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBillingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBillingGroupResponse)
    Q_DISABLE_COPY(DeleteBillingGroupResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
