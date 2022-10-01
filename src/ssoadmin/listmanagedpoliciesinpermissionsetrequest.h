// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDPOLICIESINPERMISSIONSETREQUEST_H
#define QTAWS_LISTMANAGEDPOLICIESINPERMISSIONSETREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListManagedPoliciesInPermissionSetRequestPrivate;

class QTAWSSSOADMIN_EXPORT ListManagedPoliciesInPermissionSetRequest : public SsoAdminRequest {

public:
    ListManagedPoliciesInPermissionSetRequest(const ListManagedPoliciesInPermissionSetRequest &other);
    ListManagedPoliciesInPermissionSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListManagedPoliciesInPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
