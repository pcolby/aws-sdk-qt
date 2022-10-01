// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHMANAGEDPOLICYFROMPERMISSIONSETREQUEST_H
#define QTAWS_DETACHMANAGEDPOLICYFROMPERMISSIONSETREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DetachManagedPolicyFromPermissionSetRequestPrivate;

class QTAWSSSOADMIN_EXPORT DetachManagedPolicyFromPermissionSetRequest : public SsoAdminRequest {

public:
    DetachManagedPolicyFromPermissionSetRequest(const DetachManagedPolicyFromPermissionSetRequest &other);
    DetachManagedPolicyFromPermissionSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachManagedPolicyFromPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
