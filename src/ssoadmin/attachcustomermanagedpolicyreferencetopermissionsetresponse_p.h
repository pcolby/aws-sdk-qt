// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHCUSTOMERMANAGEDPOLICYREFERENCETOPERMISSIONSETRESPONSE_P_H
#define QTAWS_ATTACHCUSTOMERMANAGEDPOLICYREFERENCETOPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class AttachCustomerManagedPolicyReferenceToPermissionSetResponse;

class AttachCustomerManagedPolicyReferenceToPermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit AttachCustomerManagedPolicyReferenceToPermissionSetResponsePrivate(AttachCustomerManagedPolicyReferenceToPermissionSetResponse * const q);

    void parseAttachCustomerManagedPolicyReferenceToPermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachCustomerManagedPolicyReferenceToPermissionSetResponse)
    Q_DISABLE_COPY(AttachCustomerManagedPolicyReferenceToPermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
