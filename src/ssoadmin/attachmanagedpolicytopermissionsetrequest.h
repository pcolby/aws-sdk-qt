// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHMANAGEDPOLICYTOPERMISSIONSETREQUEST_H
#define QTAWS_ATTACHMANAGEDPOLICYTOPERMISSIONSETREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class AttachManagedPolicyToPermissionSetRequestPrivate;

class QTAWSSSOADMIN_EXPORT AttachManagedPolicyToPermissionSetRequest : public SsoAdminRequest {

public:
    AttachManagedPolicyToPermissionSetRequest(const AttachManagedPolicyToPermissionSetRequest &other);
    AttachManagedPolicyToPermissionSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachManagedPolicyToPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
