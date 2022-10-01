// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBILLINGGROUPREQUEST_H
#define QTAWS_DELETEBILLINGGROUPREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class DeleteBillingGroupRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT DeleteBillingGroupRequest : public BillingConductorRequest {

public:
    DeleteBillingGroupRequest(const DeleteBillingGroupRequest &other);
    DeleteBillingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBillingGroupRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
