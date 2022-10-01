// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHMANAGEDPOLICYTOPERMISSIONSETRESPONSE_H
#define QTAWS_ATTACHMANAGEDPOLICYTOPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "attachmanagedpolicytopermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class AttachManagedPolicyToPermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT AttachManagedPolicyToPermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    AttachManagedPolicyToPermissionSetResponse(const AttachManagedPolicyToPermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachManagedPolicyToPermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachManagedPolicyToPermissionSetResponse)
    Q_DISABLE_COPY(AttachManagedPolicyToPermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
