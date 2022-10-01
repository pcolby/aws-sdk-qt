// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDPOLICIESINPERMISSIONSETRESPONSE_P_H
#define QTAWS_LISTMANAGEDPOLICIESINPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class ListManagedPoliciesInPermissionSetResponse;

class ListManagedPoliciesInPermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit ListManagedPoliciesInPermissionSetResponsePrivate(ListManagedPoliciesInPermissionSetResponse * const q);

    void parseListManagedPoliciesInPermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListManagedPoliciesInPermissionSetResponse)
    Q_DISABLE_COPY(ListManagedPoliciesInPermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
