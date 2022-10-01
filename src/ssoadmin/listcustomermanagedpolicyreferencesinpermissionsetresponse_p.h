// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMERMANAGEDPOLICYREFERENCESINPERMISSIONSETRESPONSE_P_H
#define QTAWS_LISTCUSTOMERMANAGEDPOLICYREFERENCESINPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class ListCustomerManagedPolicyReferencesInPermissionSetResponse;

class ListCustomerManagedPolicyReferencesInPermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit ListCustomerManagedPolicyReferencesInPermissionSetResponsePrivate(ListCustomerManagedPolicyReferencesInPermissionSetResponse * const q);

    void parseListCustomerManagedPolicyReferencesInPermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCustomerManagedPolicyReferencesInPermissionSetResponse)
    Q_DISABLE_COPY(ListCustomerManagedPolicyReferencesInPermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
