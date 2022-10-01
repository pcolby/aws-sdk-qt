// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHCUSTOMERMANAGEDPOLICYREFERENCEFROMPERMISSIONSETREQUEST_H
#define QTAWS_DETACHCUSTOMERMANAGEDPOLICYREFERENCEFROMPERMISSIONSETREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DetachCustomerManagedPolicyReferenceFromPermissionSetRequestPrivate;

class QTAWSSSOADMIN_EXPORT DetachCustomerManagedPolicyReferenceFromPermissionSetRequest : public SsoAdminRequest {

public:
    DetachCustomerManagedPolicyReferenceFromPermissionSetRequest(const DetachCustomerManagedPolicyReferenceFromPermissionSetRequest &other);
    DetachCustomerManagedPolicyReferenceFromPermissionSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachCustomerManagedPolicyReferenceFromPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
