// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHCUSTOMERMANAGEDPOLICYREFERENCETOPERMISSIONSETRESPONSE_H
#define QTAWS_ATTACHCUSTOMERMANAGEDPOLICYREFERENCETOPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "attachcustomermanagedpolicyreferencetopermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class AttachCustomerManagedPolicyReferenceToPermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT AttachCustomerManagedPolicyReferenceToPermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    AttachCustomerManagedPolicyReferenceToPermissionSetResponse(const AttachCustomerManagedPolicyReferenceToPermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachCustomerManagedPolicyReferenceToPermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachCustomerManagedPolicyReferenceToPermissionSetResponse)
    Q_DISABLE_COPY(AttachCustomerManagedPolicyReferenceToPermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
