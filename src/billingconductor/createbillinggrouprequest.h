// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBILLINGGROUPREQUEST_H
#define QTAWS_CREATEBILLINGGROUPREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class CreateBillingGroupRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT CreateBillingGroupRequest : public BillingConductorRequest {

public:
    CreateBillingGroupRequest(const CreateBillingGroupRequest &other);
    CreateBillingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBillingGroupRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
