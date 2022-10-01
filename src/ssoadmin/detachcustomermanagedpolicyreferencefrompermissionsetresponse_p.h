// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHCUSTOMERMANAGEDPOLICYREFERENCEFROMPERMISSIONSETRESPONSE_P_H
#define QTAWS_DETACHCUSTOMERMANAGEDPOLICYREFERENCEFROMPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class DetachCustomerManagedPolicyReferenceFromPermissionSetResponse;

class DetachCustomerManagedPolicyReferenceFromPermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit DetachCustomerManagedPolicyReferenceFromPermissionSetResponsePrivate(DetachCustomerManagedPolicyReferenceFromPermissionSetResponse * const q);

    void parseDetachCustomerManagedPolicyReferenceFromPermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachCustomerManagedPolicyReferenceFromPermissionSetResponse)
    Q_DISABLE_COPY(DetachCustomerManagedPolicyReferenceFromPermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
