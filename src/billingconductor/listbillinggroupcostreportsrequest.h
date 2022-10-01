// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBILLINGGROUPCOSTREPORTSREQUEST_H
#define QTAWS_LISTBILLINGGROUPCOSTREPORTSREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListBillingGroupCostReportsRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT ListBillingGroupCostReportsRequest : public BillingConductorRequest {

public:
    ListBillingGroupCostReportsRequest(const ListBillingGroupCostReportsRequest &other);
    ListBillingGroupCostReportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBillingGroupCostReportsRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
