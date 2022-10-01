// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASESCHEDULEDINSTANCESRESPONSE_H
#define QTAWS_PURCHASESCHEDULEDINSTANCESRESPONSE_H

#include "ec2response.h"
#include "purchasescheduledinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class PurchaseScheduledInstancesResponsePrivate;

class QTAWSEC2_EXPORT PurchaseScheduledInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    PurchaseScheduledInstancesResponse(const PurchaseScheduledInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PurchaseScheduledInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseScheduledInstancesResponse)
    Q_DISABLE_COPY(PurchaseScheduledInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
