// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMERMANAGEDPOLICYREFERENCESINPERMISSIONSETRESPONSE_H
#define QTAWS_LISTCUSTOMERMANAGEDPOLICYREFERENCESINPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "listcustomermanagedpolicyreferencesinpermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListCustomerManagedPolicyReferencesInPermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT ListCustomerManagedPolicyReferencesInPermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    ListCustomerManagedPolicyReferencesInPermissionSetResponse(const ListCustomerManagedPolicyReferencesInPermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCustomerManagedPolicyReferencesInPermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomerManagedPolicyReferencesInPermissionSetResponse)
    Q_DISABLE_COPY(ListCustomerManagedPolicyReferencesInPermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
