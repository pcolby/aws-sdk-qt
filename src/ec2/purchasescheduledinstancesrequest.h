// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASESCHEDULEDINSTANCESREQUEST_H
#define QTAWS_PURCHASESCHEDULEDINSTANCESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class PurchaseScheduledInstancesRequestPrivate;

class QTAWSEC2_EXPORT PurchaseScheduledInstancesRequest : public Ec2Request {

public:
    PurchaseScheduledInstancesRequest(const PurchaseScheduledInstancesRequest &other);
    PurchaseScheduledInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseScheduledInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
