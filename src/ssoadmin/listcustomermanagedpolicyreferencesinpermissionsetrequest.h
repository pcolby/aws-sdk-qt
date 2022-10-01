// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMERMANAGEDPOLICYREFERENCESINPERMISSIONSETREQUEST_H
#define QTAWS_LISTCUSTOMERMANAGEDPOLICYREFERENCESINPERMISSIONSETREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListCustomerManagedPolicyReferencesInPermissionSetRequestPrivate;

class QTAWSSSOADMIN_EXPORT ListCustomerManagedPolicyReferencesInPermissionSetRequest : public SsoAdminRequest {

public:
    ListCustomerManagedPolicyReferencesInPermissionSetRequest(const ListCustomerManagedPolicyReferencesInPermissionSetRequest &other);
    ListCustomerManagedPolicyReferencesInPermissionSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomerManagedPolicyReferencesInPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
