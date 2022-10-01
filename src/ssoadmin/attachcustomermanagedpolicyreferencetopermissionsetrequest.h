// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHCUSTOMERMANAGEDPOLICYREFERENCETOPERMISSIONSETREQUEST_H
#define QTAWS_ATTACHCUSTOMERMANAGEDPOLICYREFERENCETOPERMISSIONSETREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class AttachCustomerManagedPolicyReferenceToPermissionSetRequestPrivate;

class QTAWSSSOADMIN_EXPORT AttachCustomerManagedPolicyReferenceToPermissionSetRequest : public SsoAdminRequest {

public:
    AttachCustomerManagedPolicyReferenceToPermissionSetRequest(const AttachCustomerManagedPolicyReferenceToPermissionSetRequest &other);
    AttachCustomerManagedPolicyReferenceToPermissionSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachCustomerManagedPolicyReferenceToPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
