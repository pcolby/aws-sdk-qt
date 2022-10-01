// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHCUSTOMERMANAGEDPOLICYREFERENCEFROMPERMISSIONSETRESPONSE_H
#define QTAWS_DETACHCUSTOMERMANAGEDPOLICYREFERENCEFROMPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "detachcustomermanagedpolicyreferencefrompermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DetachCustomerManagedPolicyReferenceFromPermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT DetachCustomerManagedPolicyReferenceFromPermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    DetachCustomerManagedPolicyReferenceFromPermissionSetResponse(const DetachCustomerManagedPolicyReferenceFromPermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachCustomerManagedPolicyReferenceFromPermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachCustomerManagedPolicyReferenceFromPermissionSetResponse)
    Q_DISABLE_COPY(DetachCustomerManagedPolicyReferenceFromPermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
